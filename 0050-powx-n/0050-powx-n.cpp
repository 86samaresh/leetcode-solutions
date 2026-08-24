class Solution {
public:
    double rec(double x,int n){
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
        if(n>0)
            return rec(x,n);
        if(n==INT_MIN){
            n+=1;
            return rec(1/x,abs(n))*x;
        }
        return rec(1/x,abs(n));
    }
};