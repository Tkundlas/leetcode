class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> sol;
        int m = matrix.size() , n = matrix[0].size();
        int l = 0, r = n-1, t = 0, b = m-1;
        
        while(l <= r && t <= b)
        {
            for(int i=l; i<=r; i++)
             sol.push_back(matrix[t][i]);
            t++;
            if(t > b) break;
            
            for(int i=t; i<=b; i++)
             sol.push_back(matrix[i][r]);
            r--;
            if(l > r) break;
            
            for(int i=r; i >= l; i--)
             sol.push_back(matrix[b][i]);
            b--;
            if(t > b) break;
            
            for(int i=b; i >= t; i--)
             sol.push_back(matrix[i][l]);
                
            l++;

        }
        
        return sol;
    }
};