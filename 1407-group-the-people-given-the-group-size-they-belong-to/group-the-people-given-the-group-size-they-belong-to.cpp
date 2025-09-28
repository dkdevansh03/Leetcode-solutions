class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>>result;
        unordered_map<int,vector<int>>mpp;
        for(int i = 0 ; i < n ; i++){
            int capacity = groupSizes[i];
            mpp[capacity].push_back(i);
            if(mpp[capacity].size()==capacity){
                result.push_back(mpp[capacity]);
                mpp[capacity].clear();
            }
        }
        return result;
    }
};