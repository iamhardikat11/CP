class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b;
        vector <int> arr={0};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   arr = {i,j};
                   return arr;
                }
                    
            }
        }
        return arr;
    }
    
};
