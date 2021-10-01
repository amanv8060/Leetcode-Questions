class Solution {
public:
    int longestValidParentheses(string s) {
    {int n=s.size();
 
    int l = 0, r = 0, maxlength = 0;
 
    for (int i = 0; i < n; i++)
    {
  
        if (s[i] == '(')
            l++;
        else
            r++;

        if (l == r)
            maxlength = max(maxlength, 2 * r);
 
    
        else if (r > l)
            l = r = 0;
    }
 
    l = r = 0;
 

    for (int i = n - 1; i >= 0; i--) {
 

        if (s[i] == '(')
            l++;
        else
            r++;
 
    
        if (l == r)
            maxlength = max(maxlength, 2 * l);
 
     
        else if (l > r)
            l = r = 0;
    }
    return maxlength;
}
    }
};
