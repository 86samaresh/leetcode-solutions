class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> x;
        for(int i=0;i<nums.size();i++){
            x.push_back({nums[i],i});
        }

        sort(x.begin(),x.end());

        vector<int> g;
        g.push_back(x[0].second);

        int p=0;

        for(int i=1;i<x.size();i++){
            if(limit<abs(x[i].first-x[i-1].first)){
                sort(g.begin(),g.end());
                for(int j=p;j<i;j++){
                    x[j].second=g[j-p];
                }
                p=i;
                g.clear();
            }
            g.push_back(x[i].second);
        }

        sort(g.begin(),g.end());
        for(int j=p;j<x.size();j++){
            x[j].second=g[j-p];
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[x[i].second]=x[i].first;
        }
        return ans;

    }
};