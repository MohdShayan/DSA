class Solution {
public:

    int mulDig(int n){
        int prod=1;
         while(n!=0){
            int ld = n%10;
            prod = prod * ld;
            n = n /10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
       
        if(mulDig(n) % t ==0) return n;
        else return smallestNumber(n+1,t);
    
    }
};