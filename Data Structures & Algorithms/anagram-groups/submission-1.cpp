class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> map;

        for (const std::string& s : strs) {
            int counters[26] = { 0 };

            for (char c : s) {
                counters[c - 'a']++;
            }

            std::string key;
            for (int i = 0; i < 26; i++) {
                if (counters[i] > 0) {
                    key += char('a' + i);
                    key += std::to_string(counters[i]);
                }
            }

            map[key].push_back(s);
        }

        std::vector<std::vector<std::string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second);
        }

        return result;
    }
};