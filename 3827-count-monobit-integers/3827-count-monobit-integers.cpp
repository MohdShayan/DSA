class Solution {
public:
    bool monobit(int x){
        int ld = x&1;
        x=x>>1;
        while(x>0){
            if((x&1)!=ld) return false;
            x=x>>1;
        }
      return true; 
    }
    int countMonobit(int n) {
        int count=0;
        for(int i =0;i<=n;i++){
            if(monobit(i)==true) count++;
        }
        return count;
    }
};