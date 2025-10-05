class Solution {
public:
    int pivotInteger(int n) {
        int i = 1, j = n;
        int sum1 = i, sum2 = n;
        if(n==1) return n;
        while (i < j) {
            if (sum1 < sum2) {
                i++;
                sum1 += i;
            } else {
                j--;
                sum2 += j;
                
            }
            if (sum1 == sum2 && i + 1 == j - 1)
                return i + 1;
        }
        return -1;
    }
};
