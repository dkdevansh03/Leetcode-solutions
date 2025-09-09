class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>visited(m,0);
        vector<int> res;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j] && visited[j]==0) {
                    if (find(res.begin(), res.end(), nums2[j]) == res.end()) 
                        res.push_back(nums2[j]); 
                    visited[j] = 1;
                    break;
                }
            }
        }
        return res;
    }
};