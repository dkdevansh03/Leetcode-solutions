class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int boat = 0;
        sort(people.begin(), people.end());
        int left = 0, right = n - 1;
        while (left <= right) {
            if (people[right] + people[left] <= limit) {
                left++;
                right--;
                boat++;
            } else {
                right--;
                boat++;
            }
        }
        return boat;
    }
};