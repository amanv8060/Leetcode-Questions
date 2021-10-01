#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
             
        double res=1;
        bool flag=false;
        long long k=n;
        if(k<0){
            flag=true;
            k=-k;
        }
        while(k>0){
            if(k%2==1){
                res=res*x;
                k--;
            }
            x=x*x;
            k/=2;
            
        }
        if(flag){
            return 1.0*1/res;
        }
        return res;
        
    }
    
};
