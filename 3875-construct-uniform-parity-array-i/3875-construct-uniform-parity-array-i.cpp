class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        return true;
        int se=0,so=0;
        for(auto x:nums1){
            int z=0,y=0;
            if(x%2==0){
                z=1;
            }else{
                y=1;
            }
            for(int i=0;i<nums1.size() && (y==0 || x==0);i++){
                if(x==nums1[i])continue;
                if(z=0 && (x-nums1[i])%2==0){
                    z=1;
                }
                if(y=0 && (x-nums1[i])%2!=0){
                    y=1;
                }
            }
            if(z==0)se=1;
            if(y==0)so=1;
            if(se==1 && so==1)return false;
        }
        return true;
    }
};