class Solution {
public:
    string largestGoodInteger(string num) {
        string goodInt[] = {"999","888", "777", "666", "555", "444", "333", "222", "111", "000"};
        for(int i=0;i<10;i++){
            if(num.find(goodInt[i])!=string::npos){
                return goodInt[i];
            }
        }
        return "";
    }
};