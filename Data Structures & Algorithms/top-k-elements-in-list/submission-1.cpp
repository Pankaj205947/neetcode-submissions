class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>mid;
        for(auto&it : mp)
        {
            mid.push_back({it.second,it.first});
        }
        sort(mid.begin(),mid.end());
        vector<int>ans;
        for(int i =mid.size()-k ; i<mid.size() ;i++)
        {
            ans.push_back(mid[i].second);
        }

        return ans;
    }
};
