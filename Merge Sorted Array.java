class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        if(n!=0){
            for(int i=0;i<nums2.length;i++){
                nums1[m] = nums2[i];
                m++;
            }
        }
        Arrays.sort(nums1);
    }
}