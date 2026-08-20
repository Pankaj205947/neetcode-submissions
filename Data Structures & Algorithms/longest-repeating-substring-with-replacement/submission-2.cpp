class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>mp(128,0);
        int left =0;
        int right =0;
        int maxlen =0;
        int n = s.size();
        int count =0;
        while(right<n)
        {
            mp[s[right]]++;
            
            count =max(mp[s[right]],count);
            if((right-left+1 )- count >k)
            {
                mp[s[left]]--;
                left++;

            }
            maxlen = max(right-left +1,maxlen);
            right++;



        }
        return maxlen;
    }
};
