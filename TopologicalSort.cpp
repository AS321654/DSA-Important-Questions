vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   int indegree[V]={0};
	   queue<int> q;
	   for(int i=0;i<V;++i)
	   {
	       for(int j:adj[i])
	       {
	           ++indegree[j];
	       }
	   }
	   for(int i=0;i<V;++i)
	   {
	       if(indegree[i]==0)
	        q.push(i);
	   }
	   vector<int> v;
	   while(!q.empty())
	   {
	    int x=q.front();
	    v.push_back(x);
	    q.pop();
	    for(int j:adj[x])
	    {
	        --indegree[j];
	        if(indegree[j]==0)
	         q.push(j);
	    }
	   }
	   return v;
	   
	}
