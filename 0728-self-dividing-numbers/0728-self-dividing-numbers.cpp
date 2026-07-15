class Solution {
public:

    bool selfDiv(int n){
        int num = n;
        while(num>0){
            int d = num%10;
            if(d==0){return false;}
            else{
                if(n%d==0){
                    num = num/10;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(selfDiv(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};