bool dfs(vector<int> adj[],bool visited[],bool stac[],int s)
	{
	    visited[s]=true;
	    stac[s]=true;
	    for(int j:adj[s])
	    {
	        if(visited[j]==false)
	        {
	            if(dfs(adj,visited,stac,j))
	             return true;
	        }
	        else if(stac[j]==true)
	         return true;
	    }
	    stac[s]=false;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	bool visited[V]={false};
	   	bool stac[V]={false};
	   	for(int i=0;i<V;++i)
	   	{
	   	    if(visited[i]==false)
	   	    {   
	   	        if(dfs(adj,visited,stac,i))
	   	         return true;
	   	    }
	   	}
	   	return false;
	}
