class Solution {
private:
    long long nCr(int n , int r){
        long long ans = 1;
        if(r>n-r) r=n-r;
        if(r==1) return n;
        for(int i = 0 ; i < r ; i++){
            ans = ans*(n-i);
            ans = ans/(i+1);
        }
        return ans;
    }
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res;
        for(int i = 0 ; i < rowIndex+1 ; i++){
            res.push_back(nCr(rowIndex , i));
        }
        return res;
    }
};