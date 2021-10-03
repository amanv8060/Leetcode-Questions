class Solution {
    public int minSwaps(String s) {
        Stack<Character> st = new Stack<>();
        int n = s.length();
        for(int i = 0; i < n; i++) {
            char ch = s.charAt(i);
            if(!st.isEmpty() && st.peek() =='[' && ch == ']')
                st.pop();
            else if(ch == '[')
                st.push(ch);
        }
        return (st.size() + 1)/2;
    }

}