class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        
        for(int i=0; i<n-1; i++)
        {
            if ( nums[i] > nums[i+1])
            {
                ans += 1;
            }
        }
        
        if(nums[0] < nums[n-1])
        {
            ans += 1;
        }
        
        cout << ans;
        return ans <= 1;
    
    }
};