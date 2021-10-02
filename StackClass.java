import java.util.Stack;

class StackClass{
    public static void main(String[] args) {
        
        Stack<Integer> stk = new Stack<>();
        
        stk.push(21);
        stk.push(431);
        stk.push(15);
        stk.push(23);
        System.out.println(stk);

        
        System.out.println(stk.empty());
        System.out.println(stk.search(23));
        System.out.println(stk.peek());
        System.out.println(stk.pop());
        System.out.println(stk);

        



        
    }
}