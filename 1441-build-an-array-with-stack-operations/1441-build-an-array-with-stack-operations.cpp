class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int num = 0;
        int i=0;
        for (int num = 1; num <= n; num++) {
            if (i >= target.size()) break;

            result.push_back("Push");
            
            if (num == target[i]) {
                i++; 
            } else {
                result.push_back("Pop"); 
            }
        }
        
        return result;
    }
};