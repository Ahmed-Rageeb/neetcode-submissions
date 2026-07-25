class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        int consecutive=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-1==nums[i-1] || nums[i]==nums[i-1])
            {
                if(consecutive==0)
                {
                    consecutive=consecutive+2;   
                }
                else if(nums[i]==nums[i-1])
                {
                    continue;
                }
                else
                {
                    consecutive++;
                }
                
            }
            else
            {
               consecutive=0; 
            }
            if(consecutive>=max)
            {
                max=consecutive;
            }
        }
        return max;
    }
};
