class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set s(nums.begin(),nums.end());
        int ans=k;
        int i=1;
        int m=*max_element(s.begin(),s.end());
        while(ans<=m){
            if(!s.count(ans)){
                return ans;
            }
            ans=k*i++;
        }
        return ans;
    }
};