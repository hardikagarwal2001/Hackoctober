package com.sion;

public class SearchInRange {
    public static void main(String[] args) {
        int[] nums = {24,28,45,89,100};
        int target = 89;
        System.out.println(SearchInRange(nums,target,1,4));
    }
    static int SearchInRange(int[] arr,int target,int start,int end)
    {
        if(arr.length == 0){
            return -1;
        }
        for (int index = start; index <= end; index++) {
            int element = arr[index];
            if( element==target)
            {
                return index;
            }
        }
        return -1;
    }
}