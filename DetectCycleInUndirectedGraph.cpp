bool dfs(vector<int> adj[],int s,int parent,bool visited[])
    {
        visited[s]=true;
        for(int v:adj[s])
        {
            if(visited[v]==false)
            {   
                if(dfs(adj,v,s,visited))
                 return true;
            }
            else
            {
                if(v!=parent)
                 return true;
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    bool visited[V]={false};
	   
	    for(int i=0;i<V;++i)
	    {
	        if(visited[i]==false)
	        { if(dfs(adj,i,-1,visited)==true)
	           return true;
	        }
	    }
	    return false;
	    
	}
