class Solution {
public:
    bool isPalindrome(int x) {
        long num=x;
        long rev=0;
        if(x<0) return false;
        while(num!=0){
            
        int d =num%10;
        rev= rev*10 +d;
        num=num/10;
        }
        return rev==x;
    }
};