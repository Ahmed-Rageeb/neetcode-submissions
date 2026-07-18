class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>m;
       
        for(int i=0;i<nums.size();i++)
        {
            int remain=target-nums[i];
            if(m.find(remain) != m.end())
            {
                auto it=m.find(remain);
                ans.push_back(it->second);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};
