class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(auto it:m)
        {
            int remain=target-it.first;
            if(m.find(remain) != m.end() && m[remain]!=it.second)
            {
                auto i=m.find(remain);
                ans.push_back(it.second);
                ans.push_back(i->second);
                return ans;
            }
        }
        return ans;
    }
};
