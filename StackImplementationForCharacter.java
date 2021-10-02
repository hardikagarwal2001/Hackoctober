public class StackImplementationForCharacter {
    private char arr[];
    private int top;
    private int capacity;

    // Creating a Stack 
    StackImplementationForCharacter(int size){
        arr = new char [size];
        capacity = size;
        top = -1;
    }

    // Inserting onto Stack
    public void push(char data){
        if(isFull()) {
            System.out.println("OVERFLOW\nProgram terminated");
            System.exit(0);
        }
        System.out.println("Inserting..."+data);
        arr[++top] = data;
    }

    // Removing from the Stack
    public int pop(){
        if (isEmpty()){
            System.out.println("STACK is Empty");
            System.exit(0);
        }
        return (char)arr[top--];
    }
    
    // Utility function to return Size of Stack
    public int size(){
        return top+1;
    }

    // Check if Stack is Full
    boolean isFull(){

        return top == capacity - 1;
    }

    // Check if Stack is Empty
    boolean isEmpty(){
        return top == -1;
    }

    // Printing the Stack 

    public void printStack(){
        for(int i = 0;i<=top;i++){
            System.out.println(arr[i]);
        }
    }
    
    
    
    public static void main(String[] args) {
        


        StackImplementationForCharacter stack = new StackImplementationForCharacter(10);


}
}