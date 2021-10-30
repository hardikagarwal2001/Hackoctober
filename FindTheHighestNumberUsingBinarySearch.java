public class FindTheHighestNumberUsingBinarySearch {
    public static void main(String[] args) {
        int [] arr = {14,454,999};
        //1 2 3 4 5 where 5 is highest 

        int res = findHighest(arr);
        System.out.println(res);
    }

    public static int findHighest(int [] arr){

        int start = 0;

        int end = arr.length-1;
        int ans=0;
        if (arr.length==0) {
            return -1;
        }
        else if(arr.length<3) { 
            return arr[arr.length-1];
        }
        else{
            while (start<=end){
                int mid = start + (end-start)/2;
                if (arr[mid]>arr[mid-1]){
                    ans = arr[mid];
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
              }
        }
    
        return ans;
    }
}
