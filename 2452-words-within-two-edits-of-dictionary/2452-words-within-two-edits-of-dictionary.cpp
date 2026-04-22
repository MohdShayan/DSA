class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                string word=queries[i];
                string dict=dictionary[j];
                int count=0;
                for(int k=0;k<word.size();k++){
                    if(word[k]==dict[k]) continue;
                    else
                    count++;
                    if (count > 2) break;
                }
                if(count<=2) {
                    ans.push_back(word);
                    break;
                }
            }
        }
        return ans;
    }
};