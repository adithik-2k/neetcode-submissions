class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mymap;
        for(auto &p:nums)
        {
            mymap[p]++;
        }
        vector<pair<int,int>> s;
        for(auto &i:mymap)
        {
            s.push_back({i.second,i.first});
        }
        sort(s.rbegin(),s.rend());
        vector<int> result;
        for(int j=0;j<k;j++)
        {
            result.push_back(s[j].second);
        }
        return result;
    }
};
