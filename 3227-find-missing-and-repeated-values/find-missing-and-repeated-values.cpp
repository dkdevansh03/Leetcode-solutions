class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long N = n * n; // total numbers from 1 to N

        long long SN = (N * (N + 1)) / 2;
        long long S2N = (N * (N + 1) * (2 * N + 1)) / 6;

        long long S = 0, S2 = 0;

        // calculate actual sums from grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                S += grid[i][j];
                S2 += 1LL * grid[i][j] * grid[i][j];
            }
        }

        // difference equations
        long long val1 = S - SN;            // x - y
        long long val2 = (S2 - S2N) / val1; // x + y

        long long x = (val1 + val2) / 2; // repeated
        long long y = x - val1;          // missing

        return {(int)x, (int)y};
    }
};
