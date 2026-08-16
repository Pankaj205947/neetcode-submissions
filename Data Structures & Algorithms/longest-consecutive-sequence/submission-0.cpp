class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>mp;
        int seq;
        
        int j =0;
        int temp =0;
        for(int i =0 ; i<nums.size();i++)
        {
            mp.insert(nums[i]);
        }
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(mp.find(nums[i]-1)!=mp.end())
            {
                continue;
            }
            else
            {
                seq = nums[i];
            }
            int count =1;
            while(mp.find(seq+1) != mp.end())
            {
                count++;
                seq++;

            }
            temp = max(temp,count);
        }
        return temp;

        
        
    }
};
