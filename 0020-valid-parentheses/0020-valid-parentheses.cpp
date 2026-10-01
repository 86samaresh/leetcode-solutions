class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        st.push(0);
        int i=0;
        while(i<s.size()){
            if(s[i]=='(')st.push(1);
            else if(s[i]=='[')st.push(2);
            else if(s[i]=='{')st.push(3);
            else if(s[i]==')' && st.top()==1)st.pop();
            else if(s[i]==']' && st.top()==2)st.pop();
            else if(s[i]=='}' && st.top()==3)st.pop();
            else return false;
            i++;
        }
        st.pop();
        if(st.empty())return true;
        return false;

    }
};