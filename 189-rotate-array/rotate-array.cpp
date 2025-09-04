class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int R = k%n;
        if(R==0) return;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+R);
        reverse(nums.begin()+R,nums.end());
    }
};