class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int R = k%n;
        vector<int>temp;
        for(int i = n-R ; i<n ; i++){
            temp.push_back(nums[i]);
        }
        for(int i = n-1 ; i>=R ; i--){
            nums[i]=nums[i-R];
        }
        for(int i = 0 ; i<R ; i++){
            nums[i]=temp[i];
        }
    }
};