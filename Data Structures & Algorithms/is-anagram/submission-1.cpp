class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int counters[26] = {0};
        for (char ch : s) {
		    if (ch >= 'a' && ch <= 'z') {
		    	counters[ch - 'a']++;
		    }
	    }
	    for (char ch : t) {
	    	if (ch >= 'a' && ch <= 'z') {
		    	counters[ch - 'a']--;
		    	if (counters[ch - 'a'] < 0) {
		    		return false;
		    	}
	    	}
	    }
	    return true;
        }
};
