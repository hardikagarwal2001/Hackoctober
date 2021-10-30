/*package whatever //do not write package name here */
// https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/
// 20 min to solve
import java.io.*;
import java.util.Scanner;

class GFG {
    
    
    public static boolean ans(int [] arr,int x,int k ,int n){
        for (int i = 0;i<n;i= i + k){
            boolean check = false;
            for (int j=i;j<i+k && j<n;j++){
                if(arr[j] == k){
                    check = true;
                }
            }
            if(!check){
                return false;
            }
        }
        return true;
    }
    
	public static void main (String[] args) {
		
		
      // write your code here  
    Scanner in = new Scanner(System.in);

      int [] arr =  {1,2,3,4,5,3,4,4,3,4,3} ;
      int x = 3;
      int k = 3;
      int n = arr.length;
      if(ans(arr,x,k,n)){
          System.out.println(x +" is present in every  "+ k+" occurence");
      }
      else{
          System.out.println("NOT PRESENT");
      }
      in.close();

		
	}
}