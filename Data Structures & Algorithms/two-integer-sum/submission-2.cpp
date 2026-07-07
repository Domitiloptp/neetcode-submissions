class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            if (seen.count(dif)) {
                return {seen[dif], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
