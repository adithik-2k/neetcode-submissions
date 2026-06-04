class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        #define MAX_INT 65535
        int poshash[MAX_INT];
        int neghash[MAX_INT];
        for(int i=0;i<MAX_INT;i++)
        {
            poshash[i]=0;
            neghash[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                if(poshash[nums[i]]==0)
                {
                    poshash[nums[i]]+=1;
                }
                else if(poshash[nums[i]]!=0)
                {
                    return true;
                }
            }
            else if(nums[i]<0)
            {
                if(neghash[nums[i]*-1]==0)
                {
                    neghash[nums[i]*-1]+=1;
                }
                else if(neghash[nums[i]*-1]!=0)
                {
                    return true;
                }
            }
        }
        return false;
    }
};