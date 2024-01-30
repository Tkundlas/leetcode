class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
//         sort(nums.begin(),nums.end());
//         int i = 0;
           
//        while (i < n && nums[i] == 0)
//        {
//               nums.erase(nums.begin() + i);
//               i++;
//        }
        
         // for (; i < n; i++) 
         // {
         //     nums.push_back(0);
         // }
     
        vector<int> temp;
        
        for(int i=0; i<n; i++)
        {
             if(nums[i] != 0)
             {
                 temp.push_back(nums[i]);
             }
        }
        
        int k = temp.size();
        
        for(int i = 0; i<k; i++)
        {
            nums[i] = temp[i];
        }
        
        for(int i = k; i<n; i++)
        {
            nums[i] = 0;
        }
        
    }
};