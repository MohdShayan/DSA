class Solution {
public:
    int reverse(int x) {
        long res =0;
        
        while(x!=0){
            int d = x % 10;
            if (res > INT_MAX / 10 ) return 0;
            if (res < INT_MIN / 10 ) return 0;
            res = res*10 + d;
            x=x/10;

        }
        
        return res;
    }
};