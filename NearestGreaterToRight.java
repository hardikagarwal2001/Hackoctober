
/*

eg =>     [21,3,2,7,8] 
output => [-1,7,7,8,-1]
as there is no element greater than 21 here , for 3 there is 7 which is greater and nearer to it

*/


public class NearestGreaterToRight {

    public void bruteForce(int arr[]){


        for (int i = 0; i < arr.length; i++) {
            int largest = -1;
            for (int j = i+1; j < arr.length; j++) {
                if (arr[j]>arr[i]) {
                    largest = arr[j];
                    break;
                }
            }
            System.out.print(largest +",");

        }

    }
    
 public static void main(String[] args) {

    int arr[] ={1,3,2,4};

    // NearestGreaterToRight obj = new NearestGreaterToRight();

    // obj.bruteForce(arr);

    // using stack
    int size = arr.length;
    StackImplementationForInt stack = new StackImplementationForInt(size);

    int near[] = new int[size];

    int i =size-1;
    int j = size - 1;
    while(i>-1){
        if(stack.isEmpty()){
            near[j] = -1;
            
            stack.push(arr[i]);
            i--;j--;
        }
        else if (stack.peek() > arr[i]){
            near[j] = stack.peek();
            stack.push(arr[i]);
            j--;
            i--;
        }
        else if (stack.peek() < arr[i]){
            stack.pop();

        }
        
    }
    
    // now in near we have all element in reverse order

    
    System.out.println("Original array ");
    for (int k : arr) {
        System.out.print(k+" ");
        
    }
    System.out.println();
    System.out.println("Nearer elements");
    for( int k : near){
        System.out.print(k + " ");
    }






 }   
}
