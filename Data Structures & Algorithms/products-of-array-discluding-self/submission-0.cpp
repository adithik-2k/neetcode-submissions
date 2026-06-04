class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int prod;
        for(int i=0;i<nums.size();i++)
        {
            prod=1;
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i)
                {
                    prod*=nums[j];
                }
            }
           // prod=prod/nums[i];
            result.push_back(prod);
            
        }
        return result;
    }
};
