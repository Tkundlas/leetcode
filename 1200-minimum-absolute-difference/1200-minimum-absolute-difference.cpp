class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>> sol;
        int n = arr.size();
        int mindifference = INT_MAX;
        sort(arr.begin(),arr.end());
        
        for(int i=1; i<n; i++)
        {
            mindifference = min(mindifference, arr[i] - arr[i-1]);
        }
        
        for(int i=1; i<n; i++)
        {
            if( mindifference == arr[i] - arr[i-1])
            {
                vector<int> temp;
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                sol.push_back(temp);
            }
        }
        
        return sol;
    }
};