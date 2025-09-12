class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        for(int  i = 0 ; i < numRows ; i++){
            vector<int>ans(i+1);
            ans[0]=1;
            for(int j = 1 ; j < i+1 ; j++){
            ans[j] = (long long)ans[j-1]*(i-j+1)/j;
            }
            output.push_back(ans);    
        }
        return output;
    }
};