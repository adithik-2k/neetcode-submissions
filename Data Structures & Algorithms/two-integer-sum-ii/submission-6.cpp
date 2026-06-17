class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i1,i2;
        vector<int> res;
        for(i1=0;i1<numbers.size();i1++)
        {
            int sum=0;
            int val=target-numbers[i1];
            int l=i1;
            int h=numbers.size()-1;
            

            while(l<=h)
            {
                int mid=(l+h)/2;
                if(val==numbers[mid])
                {
                    return {i1+1,mid+1};
                }
                else if(val<numbers[mid])
                {
                    h=mid-1;
                    // mid=(l+h)/2;
                    // if(val==numbers[mid])
                    // {
                    //     return {i1+1,mid+1};
                    // }
                }
                else if(val>numbers[mid])
                {
                    l=mid+1;
                    // mid=(l+h)/2;
                    // if(val==numbers[mid])
                    // {
                    //     return {i1+1,mid+1};
                    // }
                }
                
            }
        }
        return {};
    }
};
