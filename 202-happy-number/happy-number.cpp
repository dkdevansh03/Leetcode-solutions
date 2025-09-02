class Solution {
private:
    int digitSquareSum(int n){
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n!=1){
            n=digitSquareSum(n);
            if(seen.count(n))
                return false;
            seen.insert(n);
        }
        return true;
    }
};