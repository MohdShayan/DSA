class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(string s:words){
            int t=0;
            for(char c : s){
            t=(t+weights[c-'a'])%26;
            }
            char z= 'z'-t;
            res=res+z;
        }
        return res;
    }
};