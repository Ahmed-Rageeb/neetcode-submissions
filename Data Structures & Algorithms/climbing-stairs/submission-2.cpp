class Solution {
public:
    int dp(int n, vector<int> &visit)
    {
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        if(n==1)
        {
            return 1;
        }
        if(visit[n]!=-1)
        {
            return visit[n];
        }
        visit[n]=dp(n-1,visit)+dp(n-2,visit);
        return visit[n];
    }
    int climbStairs(int n) {
       vector<int>visit(n+1,- 1);
       return dp(n,visit); 
    }
};
