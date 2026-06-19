class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ansR(nums.size());
        ansR[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            ansR[i]=nums[i-1]*ansR[i-1];
        }
        vector<int>ansL(nums.size());
        ansL[nums.size()-1]=1;

        for(int i=nums.size()-2;i>=0;i--)
        {
            ansL[i]=nums[i+1]*ansL[i+1];
        }
        vector<int>ans(nums.size());
        for(int i=0;i<ansR.size();i++)
        {
            ans[i]=ansR[i]*ansL[i];
        }
        return ans;

    }
};
