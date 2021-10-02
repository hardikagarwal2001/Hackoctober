public class NearestSmallerToRight {
    public static void main(String[] args) {
        
        int [] arr = {4,5,2,10,8};
        int size = arr.length;

        StackImplementationForInt stack = new StackImplementationForInt(size);
        int [] near = new int[size];

        int i = size-1;
        int j = size -1;

        while(i>-1){

            if(stack.isEmpty()){
                near[j] = -1;
                stack.push(arr[i]);
                i--;j--;
            }
            else if (stack.peek() < arr[i]){
                near[j] = stack.peek();
                stack.push(arr[i]);
                i--;j--;
            }
            else if( stack.peek() >= arr[i]){
                stack.pop();
            }
        }

        for (int k : near) {
            System.out.print(k + " ");
        }
    }
}
