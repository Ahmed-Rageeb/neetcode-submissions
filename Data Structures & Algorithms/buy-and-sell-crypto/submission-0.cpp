class Solution {
public:
    int dp(int i,int turn,vector<vector<int>> &visit,vector<int>& prices)
    {
        if(i>=prices.size())
        {
            return 0;
        }
        if(visit[i][turn]!=-1)
        {
            return visit[i][turn];
        }
        int ans=0;
        if(turn==0)
        {
            int take=-prices[i]+dp(i+1,1,visit,prices);
            int skip=dp(i+1,0,visit,prices);
            ans=max(take,skip);
        }
        if(turn==1)
        {
            int take=prices[i];
            int skip=dp(i+1,1,visit,prices);
            ans=max(take,skip);
        }
        visit[i][turn]=ans;
        return ans;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>visit(prices.size(),vector<int>(2,-1));
        return dp(0,0,visit,prices);
    }
};
