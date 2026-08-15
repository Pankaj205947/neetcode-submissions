class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s:strs)
        {
            vector<int>str1(26,0);
            for(char ch:s)
            {
                str1[ch-'a']++;
            }

            string k;
            for(int i =0;i<26;i++)
            {
                k +=to_string(str1[i])+'#';

            }   
            mp[k].push_back(s);


        }
        vector<vector<string>>ans;
        for(auto&it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;





        
        
        

        
        
    }
};
