class Solution {
public:

    bool isVowel(char c){
        string vowels="AEIOUaeiou";
        return vowels.find(c)!=string::npos;
    }

    string sortVowels(string s) {
        string res=s;
        int i=0;
        vector<char> vset;
        for(char c :s){
            if(isVowel(c)) vset.push_back(c);
        }
        sort(vset.begin(),vset.end());
        int j=0;

        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                res[i]=vset[j++];
            }
        }
        return res;


    }
};