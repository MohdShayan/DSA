class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;


        for(char s1 : s){
            if(s1=='#'){
                if (!st1.empty()) st1.pop();
            }
            else {
                st1.push(s1);
            }
        }
        for(char t1 : t){
            if(t1=='#'){
                if (!st2.empty()) st2.pop();
            }
            else {
                st2.push(t1);
            }
        }

        while(!st1.empty() && !st2.empty()){
            if(st1.top()!=st2.top()){
           return false;
            }
            st1.pop();
            st2.pop();
             
        }
       return st1.empty() && st2.empty();
    }
};