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
                
                // updated solution
                
                class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        const size_t len = nums.size();
        if (len < 3)
            return {};
        
        std::sort(nums.begin(), nums.end());
        
        std::set<vector<int>> unique_results;
        
        for(int i = 0; i < len - 2; i++) {
            
            int j = i + 1;
            int k = len - 1;
            
            while (j < k) {
            
                const int sum = nums[i] + nums[j] + nums[k];
                if (0 == sum) {
                    unique_results.insert({nums[i], nums[j++], nums[k--]});
                }
                else if (0 > sum)
                    j++;
                else if (0 < sum)
                    k--;
            }
        }
        
        vector<vector<int>> results;
        
        std::copy(
            unique_results.begin(), unique_results.end(),
            std::back_inserter(results));
        
        return results;
    }
};
                
           
