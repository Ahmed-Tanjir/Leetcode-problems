class Solution {
public:
    double myPow(double x, long n) { 
        
        if(n==0) return 1;

        if(n==1) return x;

        if(x==1) return 1;

        if(n<0){
            x=1/x;
            n= -n;
        }

        double ans=1;

        while(n>0){

            if(n%2==1) ans=ans*x;

            x=x*x;
            n=n/2;

        }

        return ans;

    } 
     
};