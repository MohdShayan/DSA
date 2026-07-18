class Solution {
public:

    vector<int> getSeive(int n){
        vector<int> primes(n+1);
        for(int i=2;i<n+1;i++){
            primes[i]=1;
        }

        for(int i=2;i*i<=n;i++){
            if(primes[i]){
                for(int j= i*i; j<=n;j=j+i){
                    primes[j]=0;
                }
            }
        }
        return primes;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes = getSeive(right);
        int prev = -1;
        int minD = INT_MAX;
        vector<int> ans = {-1, -1};

        for(int i = left; i <= right; i++){
            if(primes[i]) {  
                if(prev != -1) {
                    int diff = i - prev;
                    if(diff < minD) {
                        minD = diff;
                        ans = {prev, i};
                    }
                }
                prev = i;
            }
        }

        return ans;
    }
};