class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        bool aliceturn = true;
        int remove = 10;
        while(n>=remove){
            n= n-remove;
            aliceturn = !aliceturn;
            remove--;
        }
        return !aliceturn;
    }
};