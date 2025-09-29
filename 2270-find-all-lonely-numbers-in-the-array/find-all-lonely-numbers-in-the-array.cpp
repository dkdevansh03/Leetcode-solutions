class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        for (int i = 0; i < n; i++) {
            if (mpp[nums[i]] == 1 && mpp[nums[i] - 1] == 0 &&
                mpp[nums[i] + 1] == 0) {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};