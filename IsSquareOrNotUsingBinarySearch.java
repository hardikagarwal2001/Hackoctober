public class IsSquareOrNotUsingBinarySearch {
    public static void main(String[] args) {
        int x = 6;

        IsSquareOrNotUsingBinarySearch obj = new IsSquareOrNotUsingBinarySearch();

        boolean res = obj.IsSquare(0,x,x);

        System.out.println(res);
    }

    public boolean IsSquare(int start,int end,int val){

        while (start<end){
            int mid = start + (end-start)/2;

            if (mid*mid==val){
                return true;
            }
            else if (mid*mid > val){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }


        return false;
    }

}
