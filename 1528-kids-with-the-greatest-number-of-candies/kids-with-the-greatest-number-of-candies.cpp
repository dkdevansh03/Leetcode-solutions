class Solution {
private:
    int findMax(vector<int>& nums) {
        int maxVal = nums[0];  
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];  
            }
        }
        return maxVal;
    }
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> output;
        int maxVal = findMax(candies);  
        
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxVal) 
                output.push_back(true);
            else 
                output.push_back(false);
        }
        return output;
    }
};
