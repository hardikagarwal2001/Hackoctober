package testcode;

public class TransposeMatrics {

	public static void main(String[] args) {
		//Create the variable to keep the rows and columns count
		int rows, cols;    
        //Initialize matrix originalMatrix    
        int originalMatrics[][] = {    
                          {10, 22, 23},    
                          {64, 45, 36},    
                          {77, 28, 59}    
                       };    
              
        //rows and columns of original matrix add to the variable rows and column    
        rows = originalMatrics.length;    
        cols = originalMatrics[0].length;    
            
        //Declare array transposeMatrics with reverse dimensions    
        int transposeMatrics[][] = new int[cols][rows];    
            
        //Create transpose matrix using the given matrix  
        for(int i = 0; i < cols; i++){    
            for(int j = 0; j < rows; j++){    
                //Converts the row of original matrix into column of transposed matrix    
                transposeMatrics[i][j] = originalMatrics[j][i];    
            }    
        }    
        
        System.out.println("Transpose of given matrix is: ");    
        for(int i = 0; i < cols; i++){    
            for(int j = 0; j < rows; j++){    
               System.out.print(transposeMatrics[i][j] + " ");    
            }    
            System.out.println();    
        }    
    }    


}
