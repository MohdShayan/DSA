class Solution {
public:
    int countPrimes(int n) {
        vector<int> primes(n+1,1);
        int ans =0;

        for(int i=2; i*i<=n;i++){
            for(int j = i*i; j<=n;j=j+i){
                primes[j]=0;
            }
        }

        for(int i=2;i<n;i++){
            if(primes[i]) ans++;
        }
    return ans;
    }
};