class Solution {
public:
    string removeOuterParentheses(string s) {
        if(s.size()<3)return  "";
        string ans="";
        int o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(o==0){
                    o++;
                    continue;
                }
                o++;
                ans+=s[i];
            }
            else
            if(s[i]==')'){
                o--;
                if(o!=0){
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};