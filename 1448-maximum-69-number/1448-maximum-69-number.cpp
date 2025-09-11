class Solution {
public:
    int maximum69Number (int num) {
        vector<int> t;
        int c=1;
        while(num!=0){
            t.push_back(num%10);
            num/=10;
        }
        int n = t.size();
        for(int i=n-1;0<=i;i--){
            if(t[i]==6 && c>0){
                t[i]=9;
                c--;
            }
        }
        long ans=0;
        for(int i = n-1;i>=0;i--){
            ans = ans*10 + t[i];
        }
        return ans;
    }
};