class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int hashpos[65535];
        int hashneg[65535];
        int b;
        vector<int> result;
        int max_indexpos=0;
        int max_indexneg=0;
        for(int i=0;i<65535;i++)
        {
            hashpos[i]=0;
            hashneg[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                hashpos[nums[i]]+=1;
            }
            else
            {
                hashneg[nums[i]*-1]+=1;
            }
        }
        int maxpos=hashpos[0];
        int maxneg=hashneg[0];
        
        while(k>0)
        {   int j=0;
            for(j=0;j<65535;j++)
            {
                if(maxpos<hashpos[j])
                {
                    maxpos=hashpos[j];
                    max_indexpos=j;
                }
                if(maxneg<hashneg[j])
                {
                    maxneg=hashneg[j];
                    max_indexneg=j;
                }
            }
            if(maxpos>maxneg)
            {
                result.push_back(max_indexpos);
                k--;
                hashpos[max_indexpos]=0;
                maxpos=0;
                
            }
            else if(maxpos<maxneg)
            {
                result.push_back(max_indexneg*-1);
                k--;
                hashneg[max_indexneg]=0;
                maxneg=0;
               
            }
            else if(maxpos==maxneg)
            {
                result.push_back(max_indexpos);
                k--;
                result.push_back(max_indexneg*-1);
                k--;
                hashpos[max_indexpos]=0;
                maxpos=0;
                hashneg[max_indexneg]=0;
                maxneg=0;
                
            }
            // b=maxpos>maxneg?max_indexpos:max_indexneg*-1;
            // result.push_back(b);
            //k--;
            // if(b==max_indexpos)
            // {
            // hashpos[max_indexpos]=0;
            // maxpos=0;
            // }
            // else if(b==max_indexneg)
            // {
            // hashneg[max_indexneg]=0;
            // maxneg=0;
            // }
        }
        return result;
    }
};
