class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if (n % 2 != 0)
            return {};

        sort(changed.begin(), changed.end());
        unordered_map<int, int> mpp;
        for (int num : changed) {
            mpp[num]++;
        }
        vector<int> original;
        for (int num : changed) {
            if (mpp[num] == 0)
                continue;
            if (mpp[2 * num] == 0)
                return {};
            original.push_back(num);
            mpp[num]--;
            mpp[2 * num]--;
        }
        return original;
    }
};