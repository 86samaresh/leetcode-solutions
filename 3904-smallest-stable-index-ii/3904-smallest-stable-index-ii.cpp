class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> n(nums.size());
        int mine=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<mine){
                mine=nums[i];
            }
            n[i]=mine;
        }
        int i=0;
        int mx=nums[0];
        int mni=0;
        int ans=INT_MAX,ai=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]>mx)mx=nums[i];
            
            if(ans > mx-n[i]){
                ans=mx-n[i];
                ai=i;
            }
            if(ans<=k)
                return ai;
        }
        return -1;
    }
};