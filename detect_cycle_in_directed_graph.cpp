#include <bits/stdc++.h>
using namespace std;

bool isCyclicUtil(int v, bool visited[], bool *recStack,vector<int> adj[])
{
    if(visited[v] == false)
    {
        visited[v] = true;
        recStack[v] = true;

        for(auto i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack, adj) )
                return true;
            else if (recStack[*i])
                return true;
        }
    }
    recStack[v] = false;  
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }

    for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack, adj))
            return true;

    return false;
}
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}
