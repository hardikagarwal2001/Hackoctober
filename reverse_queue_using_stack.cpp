#include <bits/stdc++.h>
using namespace std;
 
// Funtion to print the queue
void printQueue(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
 
// Function to reverse the queue
void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}
 
// Driver code
int main()
{
  
  //Taking size of Queue from user
    int n;
    cout<<"Enter the size of Queue : \n";
    cin>>n;
    
    // Taking Elements of Queue from the User
    queue<int> Queue;
    
    cout<<"\nEnter Elements of the Queue :\n";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        Queue.push(a);
    }
    
    
    // Reverse the Queue Function call
    reverseQueue(Queue);
    
    //Printing the Elements of Queue  Function call
    cout<<"\nPrinting the Queue after reversing the Elements of Queue\n";
    printQueue(Queue);
    
}
