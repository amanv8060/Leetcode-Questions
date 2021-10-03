#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int character;
        int arr[26]={ };
        for(int i=0;i<s.length();i++)
        {
            character=s[i];
            arr[character-97]++;
        }
        
        for(int i=0;i<26;i++)
        {
           if(arr[i]==*max_element(arr, arr + 26) || arr[i]==0)
               continue;
            
           if(arr[i]<*max_element(arr, arr + 26)|| arr[i]>*max_element(arr, arr + 26))
                return false;
        }
        return true;
    }
};
