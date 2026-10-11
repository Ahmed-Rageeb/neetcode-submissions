class Solution {
public:
    int dp(vector<vector<int>>&v,int m,int n,int i,int j)
    {
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(i<0 || i>=m || j<0 ||j>=n)
        {
            return 0;
        }
        if(v[i][j]!=-1)
        {
            return v[i][j];
        }
        return v[i][j]=dp(v,m,n,i+1,j)+dp(v,m,n,i,j+1);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        return dp(v,m,n,0,0);
    }
};
