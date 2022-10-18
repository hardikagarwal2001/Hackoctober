class Solution {
    public int maxProfit(int[] prices) {
        int min = prices[0];
        int ans = 0;
        int max = prices[0];
        
        for(int i = 1; i < prices.length; i++){
            if(min <= prices[i]){
                ans = Math.max(ans, prices[i] - min);
            }
            else min = prices[i];
        }
        return ans;
}
}
