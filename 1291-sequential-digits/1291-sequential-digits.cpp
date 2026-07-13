class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int> ans;
        for(int l=2; l<10;l++){
            for(int i=0;i<=s.length()-l;i++){
                int num = stoi(s.substr(i,l));
                if(num>= low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};