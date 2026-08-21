class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>mp(26,0);
        vector<int>mp1(26,0);
        int n = s1.size();
        int m = s2.size();
        for(int i =0;i<n;i++)
        {
            mp[s1[i]-'a']++;
        }
        int left =0;
        int right =0;
        while(right<m)
        {
            mp1[s2[right]-'a']++;
            if(right-left +1 > n)
            {
                mp1[s2[left]-'a']--;
                left++;
                
            }
            if(right-left+1 == n)
            {
                if(mp1==mp)
                {
                    return true;
                }
            }
            
            right++;
        }
        return false;


        

        
    }
};
