class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int maxcount=1;
         if(nums.size()==0)
        {
            return 0;
        }
       sort(nums.begin(),nums.end());
        for(auto &p:nums)
        {
            cout<<p<<" ";
        }
        
        int count=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]==1)
            {
                count++;
            }
            else if(nums[i+1]-nums[i]==0)
            {
                continue;
            }
             else
            {
                maxcount=max(maxcount,count);
                count=1;
                continue;
            }
        }
        return max(maxcount,count);
    }
};
