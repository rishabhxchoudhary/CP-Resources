const int N = 2e5+1;
vector<int> graph[N];
bool visited[N];
void dfs(int node){
  visited[node] = true;
  for(int child: node){
    if (!visited[child]){
      dfs(child);
    }
  }
}
