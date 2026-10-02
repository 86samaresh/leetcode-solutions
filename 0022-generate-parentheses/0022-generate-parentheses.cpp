class Solution {
public:
    void gen(vector<string>& a,string s,int o,int c,int n){
        if(s.size()==2*n){
            a.push_back(s);
            return;
        }

        if(o<n)gen(a,s+'(',o+1,c,n);
        if(c<o)gen(a,s+')',o,c+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen(ans,"",0,0,n);
        return ans;
    }
};