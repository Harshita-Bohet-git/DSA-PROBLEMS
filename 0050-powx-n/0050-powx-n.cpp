class Solution {
public:
    double myPow(double x, int n) {
        long long num = n;
        double ans=1.0;
        if(num<0){
            num = -1*num;
        }
        while(num){
            if(num%2){ 
            ans = ans * x ;
            num = num -1;
            }
            else{
                x = x*x;
                num = num/2;
            }
        }
        if(n<0){
           ans =  (double)(1.0)/ (double)(ans); 
        }
    return ans ;
    }
};