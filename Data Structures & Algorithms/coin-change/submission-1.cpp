class Solution {
public:
    int visit(vector<int>& coins, int amount,vector<vector<int>> &dp, int i, int total)
    {
      if(total==amount)
      {
        return 0;
      }   
      if(i>=coins.size() || total>amount)
      {
        return INT_MAX;
      }
      if(dp[total][i]!=-1)
      {
        return dp[total][i];
      }
      int take=INT_MAX;
      int next=INT_MAX;
      if(total <= amount - coins[i])
      {
        next=visit(coins,amount, dp, i,total+coins[i]);
      }
      
      if(next!=INT_MAX)
      {
        take=1+next;
      }
      int skip=visit(coins,amount, dp, i+1,total);
      return dp[total][i]=min(take,skip);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(amount+1,vector<int>(coins.size(),-1));
        int ans= visit(coins,amount, dp, 0,0);
        return ans==INT_MAX?-1:ans;
    }
};
