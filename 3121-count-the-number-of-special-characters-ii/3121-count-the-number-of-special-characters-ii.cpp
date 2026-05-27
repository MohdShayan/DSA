class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map <char,int> low_mpp;
        unordered_map <char,int> up_mpp;

        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                low_mpp[word[i]]= i;
            }
            else{
                if(up_mpp.find(word[i] )==up_mpp.end())
                up_mpp[word[i]]= i;
            }
        }

        int cnt=0;
        for(auto it:low_mpp){
            if(up_mpp.find(toupper(it.first))!=up_mpp.end()){
                if(it.second<up_mpp[toupper(it.first)]){
                    cnt++;
                }
            }
        }
    return cnt;
    }
};