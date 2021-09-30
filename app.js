const express = require("express"); //requires the express module

var request = require('request'); //used for http request in this case

var fs = require('fs');

const ejs = require('ejs');



const https = require("https"); //works similarly like the axios module

const bodyParser = require("body-parser"); //body-parser helps in prsing all the data to the backend which the user enters

var path = require('path');

const {
  spawn
} = require('child_process');

var app = express();

//without this piece of code boudyparser will not work
app.use(bodyParser.urlencoded({
  extended: true
}));

app.use(express.static("public"));

app.set('view engine', 'ejs');

//runs the server on port 6969
app.listen(process.env.PORT || 6969, function() {
  console.log("Server is Running on port 6969");
});


//this get requests gets the html file from which the user entered data is coming and sends it for backend work
app.get("/", function(req, res) {
  res.sendFile(__dirname + "/public/index.html");
});

app.get("/basicResult", function(req, res) {
  res.render("basicResult");
})


//this part here handles all the code of getting data from alphavantage API//FOR BASIC USER
app.post("/public/basic.html", function(req, resp) {

  var symbol = req.body.company; //the company symbol which the user enters
  var stock = req.body.stockType;
  let stockoption;

  if (stock == "1") {
    stockoption = "BSE";
  } else {
    stockoption = "NASDAQ";
  }

  if (stockoption == "BSE") {
    symbol = symbol + "." + stockoption;
  }



  var url = "https://www.alphavantage.co/query?function=TIME_SERIES_DAILY_ADJUSTED&datatype=csv&symbol=" + symbol + "&apikey=E3SOUHEOPD38CMZ4"; //api url
  //generates request for csv data
  request.get({
    url: url,
    headers: {
      'User-Agent': 'request'
    }
  }, (err, res, info) => {
    if (err) {
      console.log('Error:', err);
    } else if (res.statusCode !== 200) {
      console.log('Status:', res.statusCode);
    } else {
      const python = spawn('python', ['basic.py', info, stockoption]);
      // collect data from script
      python.stdout.on('data', function(data) {
        console.log('Pipe data from python script ...');
        dataToSend = data.toString();
        var result = dataToSend.split("%");
        var toSend = {
          closeBasic : '/fig_basic_closing.png',
          closeAdvanced : "/fig_basic_prediction_closing.png",
          openBasic : "/fig_basic_opening.png",
          openAdvanced : "/fig_basic_prediction_opening.png",
          closeValue : result[0],
          closePrediction : result[1],
          openValue : result[2],
          openPrediction : result[3],
        }
        resp.render("basicResult",{
          recieved : toSend
        })
      });
      // in close event we are sure that stream from child process is closed
      python.on('close', (code) => {
        console.log(`child process close all stdio with code ${code}`);
      });
    }
  });
});



app.post("/public/advanced.html", function(req, resp) {

  var symbol = req.body.company; //the company symbol which the user enters
  var stock = req.body.stockType;
  let stockoption;

  if (stock == "1") {
    stockoption = "BSE";
  } else {
    stockoption = "NASDAQ";
  }

  if (stockoption == "BSE") {
    symbol = symbol + "." + stockoption;
  }


  var pred = req.body.prediction;
  let predictionType;
  if (pred == "1") {
    predictionType = "open";
  } else if (pred == "2") {
    predictionType = "close";
  } else if (pred == "3") {
    predictionType = "high";
  } else if (pred == "4") {
    predictionType = "low";
  } else if (pred == "5") {
    predictionType = "volume";
  }
  let inResult;
  if(predictionType=="open"){
    inResult="opening";
  }else if(predictionType=="close"){
    inResult="closing";
  }else{
    inResult=predictionType;
  }


  var windowVal = req.body.window;


  var tech = req.body.methodTech;
  let techName;
  if (tech == "1") {
    techName = "moving_average";
  } else if (tech == "2") {
    techName = "exponential_smoothing";
  }



  var url = "https://www.alphavantage.co/query?function=TIME_SERIES_DAILY_ADJUSTED&datatype=csv&symbol=" + symbol + "&apikey=E3SOUHEOPD38CMZ4"; //api url
  //generates request for csv data
  request.get({
    url: url,
    headers: {
      'User-Agent': 'request'
    }
  }, (err, res, info) => {
    if (err) {
      console.log('Error:', err);
    } else if (res.statusCode !== 200) {
      console.log('Status:', res.statusCode);
    } else {

      const python = spawn('python', ['advanced.py', info, predictionType, windowVal, techName, stockoption]);
      // collect data from script
      python.stdout.on('data', function(data) {
        console.log('Pipe data from python script ...');
        dataToSend = data.toString();

        var result = dataToSend.split("%");

        var toSend = {
          original : "/fig_advanced_"+inResult+".png",
          pred : "/fig_advanced_prediction_"+inResult+".png",
          val: result[0],
          by : result[1]
        }
        resp.render("advancedResult",{
          recieved : toSend
        })
      });

      // in close event we are sure that stream from child process is closed
      python.on('close', (code) => {
        console.log(`child process close all stdio with code ${code}`);
      });
    }
  });
});
