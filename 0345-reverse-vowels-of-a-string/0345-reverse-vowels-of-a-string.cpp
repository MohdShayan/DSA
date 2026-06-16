class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vset={'a','e','i','o','u'};
        int i=0;
        int j=s.size()-1;

        while(i<j){
            while(i<j && !vset.count(tolower(s[i]))){i++;}
            while(i<j && !vset.count(tolower(s[j]))){j--;}
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};