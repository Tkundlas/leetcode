class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        int n = nums.size();
        int ans = INT_MIN;
        int prefix = 1;
        int suf = 1;
        
        for(int i = 0; i<n; i++)
        {
            if(prefix== 0) prefix = 1;
            if(suf == 0) suf = 1;
            
            prefix = prefix * nums[i];
            
            suf = suf * nums[n-i-1];
            
            ans = max(ans, max(prefix,suf));
        }
        
        return ans;
        
    }
};