


// C++ program to reverse a string using stack
#include <bits/stdc++.h>
using namespace std;
 
// A structure to represent a stack
class Stack {
public:
    int topOfStack;
    unsigned capacity;
    char* array;
};
 
// function to create a stack of given capacity. It initializes size of stack as 0
Stack* createStack(unsigned capacity)
{
    Stack* stack = new Stack();
    stack->capacity = capacity;
    stack->topOfStack = -1;
    stack->array = new char[(stack->capacity * sizeof(char))];
    return stack;
}
 
// Stack is full when topOfStack is equal to the last index
int isFull(Stack* stack)
{
    return stack->topOfStack == stack->capacity - 1;
}
 
// Stack is empty when topOfStack is equal to -1
int isEmpty(Stack* stack) { return stack->topOfStack == -1; }
 
// Function to add an item to stack.
// Increases topOfStack by 1
void push(Stack* stack, char item)
{
    if (isFull(stack))
    {
        return;
    }
    
    stack->array[++stack->topOfStack] = item;
}
 
// Function to remove an item from stack.
// It decreases topOfStack by 1
char pop(Stack* stack)
{
    if (isEmpty(stack))
    {
        return -1;
    }
    
    return stack->array[stack->topOfStack--];
}
 
// A stack based function to reverse a string
string reverse(string str)
{
    // Create a stack of capacity
    // equal to length of string
    int n = str.length();
    Stack* stack = createStack(n);
 
    // Push all characters of string to stack
    int i;
    for (i = 0; i < n; i++)
    {
        push(stack, str[i]);
    }
 
    // Pop all characters of string and
    // put them back to str
    for (i = 0; i < n; i++)
    {
        str[i] = pop(stack);
    }
        
    return str;
}
 
// Driver code
int main()
{
    // Taking String from user
    cout<<"Enter a String that you want to revese \n";
    string str;
    cin>>str;
 
    //Function call for Reverse String
    string reverseString=reverse(str);
    
    // Output of the Reversed String
    cout << "\nReversed string is \n" << reverseString;
 
    return 0;
}
 