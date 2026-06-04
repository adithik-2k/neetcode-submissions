class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[150];
        int hash2[150];
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<150;i++)
        {
            hash1[i]=0;
            hash2[i]=0;
        }
        
        for(int i=0;i<s.size();i++)
        {
            hash1[s[i]]+=1;
        }
        for(int i=0;i<t.size();i++)
        {
            hash2[t[i]]+=1;
        }
        for(int i=65;i<123;i++)
        {
            if(hash1[i]!=hash2[i])
            {
                return false;
            }
        }
        return true;
    }
};
