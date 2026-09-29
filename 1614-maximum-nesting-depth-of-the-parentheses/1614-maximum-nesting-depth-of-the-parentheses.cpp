class Solution {
public:
    int maxDepth(string s) {
        int m=0;
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                x++;
            }
            if(s[i]==')'){
                if(x>m)m=x;
                x--;
            }
        }
        return m;

    }
};