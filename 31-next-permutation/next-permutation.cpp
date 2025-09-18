class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakIndex = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakIndex = i;
                break;
            }
        }
        if (breakIndex == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i > breakIndex; i--) {
            if (nums[i] > nums[breakIndex]) {
                swap(nums[i], nums[breakIndex]);
                break;
            }
        }
        reverse(nums.begin() + breakIndex + 1, nums.end());
        return;
    }
};