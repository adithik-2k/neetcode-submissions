class Solution {
public:
    bool isPalindrome(string s) {
        string s2="";
        for(char c:s)
        {
            if(isalnum(c))
            {
                s2.push_back(tolower(c));
            }
        }
        string s3= string(s2.rbegin(),s2.rend());
        return s2==s3;
    }
};
