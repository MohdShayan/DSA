class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int prod =1;
        int t=n;
        while(t>0){
            int ld =t%10;
            sum = sum +ld;
            prod = prod*ld;
            t=t/10;
        }
        return n%(prod+sum)==0;
    }
};