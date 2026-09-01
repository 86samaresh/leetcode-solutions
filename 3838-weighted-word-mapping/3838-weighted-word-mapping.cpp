class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(auto x:words){
            int s=0;
            for(auto y:x){
                s+=weights[y-'a'];
            }
            ans+='a'+(25-s%26);
        }
        return ans;
    }
};