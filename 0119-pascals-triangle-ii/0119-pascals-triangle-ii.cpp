class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1,1);
        if(rowIndex==0 or rowIndex==1)return ans;
        int p=1;
        for(int i=2;i<=rowIndex;i++){
            for(int j=1;j<=i/2;j++){
                if(j==1){
                    p=ans[j];
                    ans[j]=ans[j-1]+ans[j];
                    continue;
                }
                int t=ans[j];
                ans[j]=ans[j]+p;
                p=t;
            }
            for(int j=i/2+1;j<i;j++){
                if(i%2!=0){
                    ans[j]=ans[i/2-j+i/2+1];
                    continue;
                }
                ans[j]=ans[i/2-j+i/2];
            }
        }
        return ans;
    }
};