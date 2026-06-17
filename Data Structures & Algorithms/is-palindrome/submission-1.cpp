class Solution {
public:
    bool isPalindrome(string s) {
         string s2;
        int i=s.size()-1;
        int j=0;
        while(i>=0)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)|| (s[i]>='0' && s[i]<='9'))
            {
                
                s2.push_back(tolower(s[i]));
            }
            i--;
            
        }
        string s3;
        for(int i=0;i<s.size();i++)
        {
             if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)|| (s[i]>='0' && s[i]<='9'))
            {
                
                s3.push_back(tolower(s[i]));
            }
        }
        for(int k=0;k<s2.size();k++)
        {
            if(tolower(s2[k])!=s3[k])
            {
                return false;
            }
        }
        return true;
    }
};
