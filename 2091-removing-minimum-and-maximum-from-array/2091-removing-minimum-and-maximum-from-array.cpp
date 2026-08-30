class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min=min_element(nums.begin(),nums.end())-nums.begin()+1;
        int max=max_element(nums.begin(),nums.end())-nums.begin()+1;
        int s=nums.size();
        if(s==1)return 1;
        if(s==2|| s==3)return 2;
        int b=((min>max)?min:max);
        int c=((min>max)?max:min);
        if(b<=s-c+1 && b<=c+s-b+1){
            return b;
        }
        if(b>=s-c+1 && s-c+1<=c+s-b+1){
            return s-c+1;
        }
        if(c+s-b+1<=s-c+1 && b>=c+s-b+1){
            return c+s-b+1;
        }
        return 1;
    }
};