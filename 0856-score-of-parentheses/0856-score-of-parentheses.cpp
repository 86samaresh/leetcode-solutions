class Solution {
public:
    int score(string& s, int& i){
        int ans=0;
        while(i<s.size() && s[i]=='('){
            i++;
            if(s[i]==')'){
                ans++;
                i++;
            }else{
                ans+=2*score(s,i);
                i++;
            }
        }
        return ans;
    }
    int scoreOfParentheses(string s) {
        int i=0;
        return score(s,i);
    }
};