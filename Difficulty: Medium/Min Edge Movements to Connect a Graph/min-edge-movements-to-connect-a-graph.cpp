class Solution {
  public:
    int minEdgesReq(int n, vector<vector<int>>& edges) {
        // code here
        int m = edges.size();
        if(m < n-1) return -1; // not enough edges to ever connect

        // Build adjacency list
        vector<vector<int>> adj(n);
        for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(n, false);
        int components = 0;

        // DFS to count components
        function<void(int)> dfs = [&](int u) {
            visited[u] = true;
            for(int v : adj[u]) {
                if(!visited[v]) dfs(v);
            }
        };
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                components++;
                dfs(i);
            }
        }
               return components - 1;
    }
};