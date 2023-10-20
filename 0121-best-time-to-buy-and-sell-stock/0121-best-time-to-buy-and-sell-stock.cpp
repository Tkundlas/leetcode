class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int maxi = 0, low = 0;
        
        for(int i = low ; i < n; i++)
        {
            
            if( prices[i] < prices[low])
            { 
                low  = i;
                continue;
            }  
            
            maxi = max(maxi, prices[i] - prices[low]);
        }
        
        return maxi;
        
    }
};