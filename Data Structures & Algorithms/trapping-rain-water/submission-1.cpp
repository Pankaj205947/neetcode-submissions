class Solution {
public:
    int trap(vector<int>& height) {
        int left =1;
        int right = height.size()-1;
        int lmax = height[left-1];
        int rmax = height[right];
        int res =0;
        while(left<=right)
        {
            if(lmax<=rmax)
            {
                res = res+ max(0,lmax-height[left]);
                lmax = max(lmax,height[left]);
                left++;

            }
            else
            {
                res = res+ max(0,rmax-height[right]);
                rmax = max(rmax,height[right]);
                right--;
            }
        }
        return res;

       

    
        
        
        
    }
};
