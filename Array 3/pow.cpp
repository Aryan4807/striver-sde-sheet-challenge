 double myPow(double x, int n) {
        if(n==0)return 1;
        if(x==0)return x;
        long long q=n;
        double p=fun(x,abs(q));
        if(n<0)return 1/p;
        return p;
    }
    double fun(double x, long long n){
        if(n==0)return 1;
        if(n%2==0){
        double p=fun(x,n/2);
        return p*p;
        }
        else{
        double p=fun(x,n/2);
        return x*p*p;
        }
    }