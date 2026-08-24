class Solution {
public:
    double rec(double x,long long n){
        if(n==1)return x;
        if(n==0)return 1;
        double a= rec(x,n/2);
        a*=a;
        if(n%2!=0)a*=x;
        return a;
    }
    double myPow(double x, int n) {
        if (n == 0)
            return 1;
        if(x==0)return 0;
        long long m=n;
        if(m>0)
            return rec(x,m);
        return rec(1/x,m);
    }
};