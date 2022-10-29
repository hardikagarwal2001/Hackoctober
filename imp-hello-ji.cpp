 httpsleetcode.comproblemsmajority-element
class Solution {
    public int majorityElement(int[] nums) {
     
        int cur = nums[0];
        int cnt = 1;
        for (int i=1;inums.length;i++){
            if(nums[i] == cur){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt == 0){
                cur = nums[i];
                cnt = 1;
            }
        }
        return cur;
         cnt = 0;
         for(int e  nums){
             if (e == cur){
                 cnt++;
             }
         }
         if (cnt  nums.length2){
             return cur;
         }
         return -1;
    }
}
