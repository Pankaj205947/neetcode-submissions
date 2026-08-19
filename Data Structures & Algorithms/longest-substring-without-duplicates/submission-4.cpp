class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int left =0;
        int right =0;
        int maxlen =0;
        int n =s.size();
        while(right<n)
        {
            if(mp[s[right]]!=-1)
            {
                left = max(mp[s[right]]+1,left);
            }
            mp[s[right]]= right;
            maxlen = max(right-left+1,maxlen);
            right++;

        }
        return maxlen;
    }
};
