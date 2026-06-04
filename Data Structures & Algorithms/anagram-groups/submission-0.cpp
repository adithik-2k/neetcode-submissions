class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> myMap;
        vector<vector<string>> result;
        for(int i=0;i<strs.size();i++)
        {
            string s,key;
            s=strs[i];
            key=s;
            sort(key.begin(),key.end());
            myMap[key].push_back(s);
        }
        for(auto &p:myMap)
        {
            result.push_back(p.second);
        }
        return result;
    }
};
