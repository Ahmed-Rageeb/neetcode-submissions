class Solution {
public:
    int dp(vector<int>&nums,vector<int>&visit,int i)
    {
        if(i>=nums.size())
        {
            return 0;
        }
        if(visit[i]!=-1)
        {
            return visit[i];
        }
        int take=nums[i]+dp(nums,visit,i+2);
        int skip=dp(nums,visit,i+1);
        return (visit[i]=max(take,skip));

    }
    int rob(vector<int>& nums) {
        vector<int>visit(nums.size(),-1);
        return dp(nums,visit,0);
    }
};
