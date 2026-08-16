class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c: s){
            if(c=='(' || c=='{' ||  c=='[' ){st.push(c);}
            else{
                if(st.empty()) return false;
                char last= st.top();
                st.pop();
                if(c==')' && last!='(' || c==']' && last!='[' || c=='}' && last!='{'){
                    return false;
                }
            }
        }
        return st.empty();
    }
};