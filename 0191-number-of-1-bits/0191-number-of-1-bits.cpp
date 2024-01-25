class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int ans = 0;
        cout<<n;
        
        while (n>0)
        {
            ans += n%2;
            n = n/2;
            cout<<n<<" ";
        }
        
        cout<<ans<<" "<<n;
        
        return ans;
        
    }
};