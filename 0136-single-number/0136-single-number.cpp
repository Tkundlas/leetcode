class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int xorr = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            xorr = xorr^nums[i];
        }
        
        return xorr;
        
    }
};