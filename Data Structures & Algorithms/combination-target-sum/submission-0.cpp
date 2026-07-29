class Solution {
public:
    vector<vector<int>>back;
    vector<vector<int>> sum1(vector<int>& nums, int target,int i,int sum,vector<int>&visit)
    {
        if(sum==target)
        {
            back.push_back(visit);
            return back;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(sum+nums[j]>target)
            {
                break;
            }
            visit.push_back(nums[j]);
            sum1(nums,target,j,sum+nums[j],visit);
            visit.pop_back();
        }
        return back;

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>visit;
        sort(nums.begin(),nums.end());
        return sum1(nums,target,0,0,visit);
    }
};
