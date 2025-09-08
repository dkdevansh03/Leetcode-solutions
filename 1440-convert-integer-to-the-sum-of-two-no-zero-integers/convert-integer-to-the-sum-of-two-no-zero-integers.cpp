class Solution {
private:
    bool checkNonzero(int n){
        while(n!=0){
            int digit = n%10;
            if(digit==0) return false;
            n/=10;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res;
        for(int i = 1 ; i<n ; i++){
            if(checkNonzero(i) && checkNonzero(n-i)){
                res.push_back(i);
                res.push_back(n-i);
                break;
            }
        }
        return res;
    }
};