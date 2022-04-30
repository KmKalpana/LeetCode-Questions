for(auto i: graph[0])
{
vector<int>v;
v.push_back(0);
if(!vis[i])
{
dfs(graph,i,vis,v,n);
}
res.push_back(v);
}