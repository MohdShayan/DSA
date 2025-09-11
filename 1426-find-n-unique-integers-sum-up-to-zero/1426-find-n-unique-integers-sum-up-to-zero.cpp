class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2 == 0){
            for(int i = n/2 ; 0<i; i--){
                ans.push_back(i);
                ans.push_back(-i);
            }
        }
        else {
            for(int i = n/2 ; 0<i; i--){
                ans.push_back(i);
                ans.push_back(-i);
            }
            ans.push_back(0);
        }
        return ans;
    }
};