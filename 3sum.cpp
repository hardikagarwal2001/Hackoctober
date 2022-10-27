class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;
        if(nums.size() <=2) return res; 
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++) {
            
            if(i>0 && nums[i] == nums[i-1])
                continue;
            
            int num = nums[i]; 
            int target = 0 - num;
            
            for(int l=i+1, r=nums.size()-1; l<r; ) {
                
                if(nums[l]+nums[r] > target)                     
                    r--;
                
                else if (nums[l]+nums[r] < target) 
                    l++;
                
                else {
                    res.push_back({nums[i], nums[l], nums[r]}); 

                    while( l<nums.size()-1 && nums[l]==nums[l+1]) l++; 
                    while( r>0 && nums[r]==nums[r-1]) r--;
                                            
                    l++;
                    r--;                    
                    
                } 
                
            }                                  
            
        }
        return res;   
    }
};
