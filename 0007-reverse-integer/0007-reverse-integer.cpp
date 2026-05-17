class Solution {
public:
    int reverse(int x) {
      
    long long newnum = 0;

    while(x!=0){

        int reverse = x%10 ;

        x /= 10;
        
        if(newnum > INT_MAX/10 ||
        (newnum == INT_MAX/10 && reverse > 7)){

            return 0;

        }

        if(newnum < INT_MIN/10 ||(newnum == INT_MIN/10 && reverse < -8) ){

                return 0;

        }

        newnum = newnum * 10 + reverse;

    }


    return newnum;

    }
};