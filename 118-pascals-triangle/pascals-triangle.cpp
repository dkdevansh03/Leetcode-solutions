class Solution {
private:
    vector<int> generateRows(int n) {
        vector<int> res(n);
        res[0] = 1;
        for (int i = 1; i < n; i++) {
            res[i] = (long long)res[i - 1] * (n - i) / i;
        }
        return res;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        for (int i = 1; i <= numRows; i++) {
            output.push_back(generateRows(i));
        }
        return output;
    }
};