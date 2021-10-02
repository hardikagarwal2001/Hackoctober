import java.util.Arrays;


class NearestGreaterToLeft{
    public static void main(String[] args) {
        

        int arr[] = {10, 5, 11, 6, 20, 12};
        int size = arr.length;
        int near[]  = new int[size];
        StackImplementationForInt stack = new StackImplementationForInt(size);

        int i = 0;
        int j = 0;
        while (i<size){

            if (stack.isEmpty()){
                near[j] = -1;
                stack.push(arr[i]);
                i++;
                j++;
            }
            else if (stack.peek() > arr[i]){
                near[j] = stack.peek();
                stack.push(arr[i]);
                i++;
                j++;
            }
            else if (stack.peek() <= arr[i]){
                stack.pop();
            }
        }

        System.out.println(Arrays.toString(near));
    
    
    
    
    
    }
}