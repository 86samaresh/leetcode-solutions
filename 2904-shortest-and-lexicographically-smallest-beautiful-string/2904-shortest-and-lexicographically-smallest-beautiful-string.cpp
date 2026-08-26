class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0;
        vector<string> st;
        int oc=0;
        while(s[l]!='1' && l<s.size()){
            l++;
        }
        if(l==s.size())return "";
        if(k==1)return "1";
        oc++;
        r=l;
        while(r<s.size()){
            while(oc<k && r<s.size()){
                r++;
                if(s[r]=='1')
                    oc++;
            }
            if(oc==k && r-l+1==k){
                return s.substr(l,k);
            }
            if(oc==k && (st.size()==0 || st[0].size()>=r-l+1)){
                if(st.size()>0 && st[0].size()>r-l+1){
                    st.clear();
                }
                st.push_back(s.substr(l,r-l+1));
            }
            l++;
            oc--;
            while(l<r && s[l]!='1'){
                l++;
            }
        }
        if(st.size()>0){
            sort(st.begin(),st.end());
            return st[0];
        }
        return "";
    }
};