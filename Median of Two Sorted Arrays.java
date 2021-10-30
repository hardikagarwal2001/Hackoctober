//https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int l1= nums1.length;
        int l2  = nums2.length;
        int [] arr = new int[l1+l2];
        int i=0,j=0,k=0;
        while(i<l1 && j<l2){
            if (nums1[i]<=nums2[j]){
                arr[k++] = nums1[i++];
            }else{
                arr[k++]=nums2[j++];
            }
        }
        for(;i<l1;){
            arr[k++]=nums1[i++];
        }
        
        for(;j<l2;){
            arr[k++]=nums2[j++];
        }
        int l  = arr.length;
        
            int index = l/2;
        if (l%2==0){
            
            double ans = arr[index] + arr[index-1];
            return ans/2;
        }
        return arr[index];
        
        
    }
}