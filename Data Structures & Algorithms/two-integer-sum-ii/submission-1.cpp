class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i1,i2;
        vector<int> res;
        for(i1=0;i1<numbers.size();i1++)
        {
            int sum=0;
            for(i2=i1+1;i2<numbers.size();i2++)
            {
                if(target-numbers[i1]==numbers[i2])
                {
                    res.push_back(i1+1);
                    res.push_back(i2+1);
                    return res;
                }
            }
        }
    }
};
