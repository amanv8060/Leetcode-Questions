#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int res = 0;
        int temp = x;
        while (true) {
            res = res*10 + temp%10;
            temp = temp / 10;
            if(temp==0){
                break;
            }
            else{
            if (res > INT_MAX / 10){
                    return false;
                }
            }
    
        }
        return res == x;
    }
};