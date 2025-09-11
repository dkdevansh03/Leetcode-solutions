class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        const int N = nums.size();
        vector<int> res(N);
        int pos = 0, neg = 1;
        for (int num : nums) {
            if (num > 0) {
                res[pos] = num;
                pos += 2;
            } else {
                res[neg] = num;
                neg += 2;
            }
        }
        return res;
    }
};