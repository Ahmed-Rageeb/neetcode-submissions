class Solution {
public:
    bool dfs(vector<vector<int>>& adj, vector<int> &visit, int i, int parent)
    {
        if(visit[i]!=-1)
        {
            return false;
        }
        visit[i]=1;
        for (int j: adj[i])
        {
           if(j==parent)
           {
            continue;
           }
           if(! dfs(adj,visit,j,i))
           {
             return false;
           }
        }
        return true;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int>visit(n,-1);
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);
        }
        if(!dfs(adj,visit,0,-1))
        {
            return false;
        }
        for(int i=0;i<visit.size();i++)
        {
            if(visit[i]==-1)
            {
                return false;
            }
        }
        return true;
    }
};
