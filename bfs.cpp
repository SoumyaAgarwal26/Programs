#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    queue<int> q; 
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int temp=q.front();
        cout<<temp<<" ";
        q.pop();
        for(auto i=adj[temp].begin();i!=adj[temp].end();++i)
        {
            if(vis[*i]==false)
            {
                vis[*i]=true;
                q.push(*i);
            }
        }
        
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis, N);
        cout<<endl;
    }
}
