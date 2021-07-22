void dfs(vector<vector<char>> &grid,int i,int j, vector<bool> visited[])
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||visited[i][j]==true||grid[i][j]=='0')
         return;
        visited[i][j]=true;
        dfs(grid,i-1,j,visited);
        dfs(grid,i,j+1,visited);
        dfs(grid,i+1,j,visited);
        dfs(grid,i,j-1,visited);
        dfs(grid,i+1,j+1,visited);
        dfs(grid,i-1,j-1,visited);
        dfs(grid,i-1,j+1,visited);
        dfs(grid,i+1,j-1,visited);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<bool> visited[m];
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                visited[i].push_back(false);
            }
        }
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(visited[i][j]==false&&grid[i][j]=='1')
                {
                    count++;
                    dfs(grid,i,j,visited);
                }
            }
        }
        return count;
    }
