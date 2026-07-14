class Solution {

private :
    int sum1(int n ){
        int sum = 0 ; 
        while(n>0){
            int digit = n%10;
            sum+=digit*digit;
            n = n/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n ;
        
        do{
            slow = sum1(slow);
            fast = sum1(sum1(fast));
        }
        while(slow!=fast);
       if(slow==1){
        return true;
       } 
       else{
        return false;
       }
    }
};