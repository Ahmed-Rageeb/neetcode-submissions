class Solution {
public:
    int visit(int i, int prev, vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i==nums.size())
        {
            return 0;
        }
        if(dp[i][prev+1]!=-1)
        {
            return dp[i][prev+1];
        }
        int skip=visit(i+1,prev,nums,dp);
        int take=0;
        if(prev==-1 || nums[i]>nums[prev])
        {
             take=1+visit(i+1,i,nums,dp);
        }
        return dp[i][prev+1]=max(skip,take);
        
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        return visit(0,-1,nums,dp);
    }
};
