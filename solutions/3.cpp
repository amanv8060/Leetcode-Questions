#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int window_len=0;
        int max_window_len=0;
        int i=0; int j=0;
        unordered_map<char,int> m;
        while(j<s.length()){
            char ch=s[j];
                i=m[ch]+1;
                //update window length
                window_len=j-i;
            }
            //if new unique character then push character and its occurance in the map
            m[ch]=j;
            window_len++;
            j++;
            //update longest unique substring length
            max_window_len=max(max_window_len,window_len);
        }
        return max_window_len;
        
    }
};
