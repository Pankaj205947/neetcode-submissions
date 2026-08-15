class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>me;
        for(int i = 0;i<nums.size();i++)
        {
            me.push_back({nums[i],i});
        }
        sort(me.begin(),me.end());
        int i =0;
        int j = me.size()-1;
        while(i<j)
        {
            int sum = me[i].first+me[j].first;
            if(sum>target)
            {
                j--;
            }
            else if(sum<target)
            {
            i++;
            }
            else
            {
                return {min(me[i].second,me[j].second),max(me[i].second,me[j].second)};
            }

        }
        return{};
  
    }
};
