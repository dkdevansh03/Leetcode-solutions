class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>positive;
        vector<int>negative;
        vector<int>res;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>0) positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        int i = 0 , j = 0;
        while(i<positive.size()||j<negative.size()){
            if(i<positive.size())
                res.push_back(positive[i++]);
            if(j<negative.size())
                res.push_back(negative[j++]);
        }
        return res;
    }
};