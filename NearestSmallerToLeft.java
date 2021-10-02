public class NearestSmallerToLeft {
    public static void main(String[] args) {
        

        int arr[] = {4,5,2,10,8}; // ans = [-1,1,1,2]
        int size = arr.length;
        int near[] = new int[size];
        StackImplementationForInt stack = new StackImplementationForInt(size);


        int i = 0;
        int j = 0;

        while(i<size){

            if (stack.isEmpty()){
                near[j] = -1;
                stack.push(arr[i]);
                
            }
            else if( stack.peek() < arr[i]){
                near[j] = stack.peek();
                stack.push(arr[i]);
               
            }
            else if (stack.peek() >= arr[i]){
                stack.pop();
                i--;
                j--;
            }

            i++;
            j++;
        }

        for (int k : near) {
            System.out.print(k+ " ");
        }

    }
}
