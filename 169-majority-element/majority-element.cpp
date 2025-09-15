class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int n:nums){
            freq[n]++;
        }
        for(auto it : freq){
            if(it.second>n/2)
                return it.first;
        }
        return -1;
    }
};