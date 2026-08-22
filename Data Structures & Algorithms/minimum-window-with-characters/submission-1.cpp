class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> mp(128, 0);
        vector<int> mp1(128, 0);

        for (char ch : t) {
            mp[ch]++;
        }

        int left = 0;
        int right = 0;

        int count = 0;
        int target = 0;

        // Number of unique characters required
        for (int i = 0; i < 128; i++) {
            if (mp[i] > 0)
                target++;
        }

        int minlen = INT_MAX;
        int start = 0;

        while (right < s.size()) {

            char ch = s[right];

            mp1[ch]++;

            if (mp[ch] > 0 && mp1[ch] == mp[ch]) {
                count++;
            }

            while (count == target) {

                if (right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    start = left;
                }

                char leftchar = s[left];

                mp1[leftchar]--;

                if (mp[leftchar] > 0 &&
                    mp1[leftchar] < mp[leftchar]) {
                    count--;
                }

                left++;
            }

            right++;
        }

        if (minlen == INT_MAX)
            return "";

        return s.substr(start, minlen);
    }
};