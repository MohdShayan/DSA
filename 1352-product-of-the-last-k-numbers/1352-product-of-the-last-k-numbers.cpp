class ProductOfNumbers {
public:
    vector<int> arr;
    int n=0; 
    ProductOfNumbers() {
      
    }
    
    void add(int num) {
        arr.push_back(num);
        n++;
    }
    
    int getProduct(int k) {
        int ans =1;
        for(int i=n-1;i>=n-k;i--){
            ans = ans * arr[i];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */