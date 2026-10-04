class Solution {
    vector<vector<int>> dp;
public:
    bool rec(string s,int i,int b){
        if(i==s.size() && b==0)return dp[i][b]=1;
        if(i==s.size())return dp[i][b]=0;
        if(dp[i][b]==1)return 1;
        if(dp[i][b]==0)return 0;


        if(s[i]=='('){
            return dp[i][b]=rec(s,i+1,b+1);
        }
        else if(s[i]==')' && b>0){
            return dp[i][b]=rec(s,i+1,b-1);
        }
        else if(s[i]==')'){
            return 0;
        }
        else{
            if(rec(s,i+1,b))return dp[i][b]=1; // * as empty 
            if(rec(s,i+1,b+1))return dp[i][b]=1; 
            if(b>0){
                return dp[i][b]=rec(s,i+1,b-1);
            } // as end brac
            
        }
        return 0;
    }
    bool checkValidString(string s) {
        int n=s.size();
        dp=vector<vector<int>>(n+1,vector<int>(n+1,-1));
        return rec(s,0,0);
    }
};