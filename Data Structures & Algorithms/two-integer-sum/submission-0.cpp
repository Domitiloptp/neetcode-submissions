class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> sortedNums(n);
        for (int i = 0; i < n; ++i) {
            sortedNums[i] = { nums[i], i };
        }

        sort(sortedNums.begin(), sortedNums.end());

        for (int i = 0; i < n; ++i) {
            int dif = target - sortedNums[i].first;

            int left = i + 1;
            int right = n - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (sortedNums[mid].first == dif) {
                    return {min(sortedNums[i].second, sortedNums[mid].second), max(sortedNums[i].second, sortedNums[mid].second)};
                }
                else if (sortedNums[mid].first < dif){
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }

        return {};
    }
};
