class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        vector<int> charArr(26);

        for(char c : word){
            charArr[c-'a']++;
        }
        sort(charArr.begin(),charArr.end(),greater<int>());
        int t=0;
        int j=1;
        for(int i=0;i<26;i++){
            if(charArr[i]!=0){
                cnt = cnt+ charArr[i]*j;
                t++;
                if(t==8){
                    t=0;
                    j++;
                }
            }
        }
        return cnt;

    }
};