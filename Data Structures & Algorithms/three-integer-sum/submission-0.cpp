class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            
            int second=i+1;
            int third=nums.size()-1;
            vector<int>temp;
            while(third>second)
            {
                if(nums[i]+nums[second]+nums[third]==0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[second]);
                    temp.push_back(nums[third]);
                    second++;
                    third--;
                    ans.push_back(temp);
                    temp.clear();

                }
                else if(nums[i]+nums[second]+nums[third]>0)
                {
                    third--;
                }
                else
                {
                    second++;
                }
            }
            
        }
        return ans;
    }
};
