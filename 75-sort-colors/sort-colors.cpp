class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int hashArr[3] = {0};
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                hashArr[0]++;
            else if (nums[i] == 1)
                hashArr[1]++;
            else
                hashArr[2]++;
        }
        vector<int> ans;
        for (int i = 0; i < hashArr[0]; i++) {
            ans.push_back(0);
        }
        for (int i = 0; i < hashArr[1]; i++) {
            ans.push_back(1);
        }
        for (int i = 0; i < hashArr[2]; i++) {
            ans.push_back(2);
        }
        nums = ans;
    }
};