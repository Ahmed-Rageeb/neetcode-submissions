class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>visit;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    visit.push_back({i,j});
                }
            }
        }
        for(int i=0;i<visit.size();i++)
        {
            auto[row,col]=visit[i];
            for(int l=0;l<matrix[0].size();l++)
            {
               matrix[row][l]=0;   
            }
            for(int l=0;l<matrix.size();l++)
            {
                matrix[l][col]=0;
            }
        }
    }
};
