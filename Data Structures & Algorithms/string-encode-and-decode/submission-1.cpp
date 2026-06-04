
#include <iostream>
#include <string>

class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(auto &p:strs)
        {
            encoded_string += to_string(p.size()) + '#' + p;
        }
     return encoded_string;   
    }

    vector<string> decode(string s) {
       int i=0,j;
        
         vector<string> result;
        
        

        while(i<s.size())
        {
            j=i;
            while(s[j]!='#')
            {
                j++;
            }
            
            int size1=stoi(s.substr(i,j-i));
            
            result.push_back(s.substr(j+1,size1));
            i=1+size1+j;
        }
         return result;
        
        
    }
};
