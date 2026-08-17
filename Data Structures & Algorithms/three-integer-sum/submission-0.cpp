class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum;
        int n = nums.size()-1;
        vector<int>temp;
        vector<vector<int>>ans;
        for(int i =0 ; i<n ; i++)
        {

            if(i>0 && nums[i]== nums[i-1])
            {
                continue;
            }
            int j = i+1;
            int k = n;
            while(j<k)
            {
                sum = nums[i]+nums[j]+nums[k];
                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    temp =  {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]== nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;





                }



            }
            
        }
        
        
        return ans;

    }
};
