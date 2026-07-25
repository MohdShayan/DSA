class Solution {
public:
    int maxProduct(int n) {
        int fm = INT_MIN;
        int sm = INT_MIN;

        while(n!=0){
            int ld = n%10;
            if(ld>fm){
                sm = fm;
                fm=ld;
            }
            else if(ld>sm ){
                sm=ld;
            }

            n=n/10;
        }
        return fm*sm;
    }
};