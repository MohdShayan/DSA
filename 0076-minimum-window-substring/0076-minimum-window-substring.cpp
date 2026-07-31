class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,cnt=0;
        unordered_map<char,int> mpp;
        int sind=-1;
        int minlen=INT_MAX;
        for(char c:t){mpp[c]++;}

        while(r<s.size()){
            if(mpp[s[r]]>0){
                cnt++;
            }
                mpp[s[r]]--;
            while(cnt==t.size()){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sind=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) cnt =cnt-1;
                l++;
            }
            r++;
        }
        return sind==-1?"":s.substr(sind,minlen);
    }
};