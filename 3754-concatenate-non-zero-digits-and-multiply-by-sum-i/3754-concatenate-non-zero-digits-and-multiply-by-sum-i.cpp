class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num=0;
        int i=0;
        long long sum=0;
        while(n>0){
            int ld = n%10;
            if(ld!=0){
                num = num + pow(10,i)*ld;
                sum=sum+ld;
                i++;
            }
            
            n=n/10;
        }
        return sum*num;
    }
};