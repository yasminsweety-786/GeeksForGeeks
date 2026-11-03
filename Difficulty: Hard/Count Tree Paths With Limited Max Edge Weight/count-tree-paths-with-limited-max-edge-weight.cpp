class DSU {
    vector<int> parent, sz;

public:
    DSU(int n) {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);

        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    long long unite(int u, int v) {
        u = find(u);
        v = find(v);

        if (u == v)
            return 0;

        if (sz[u] < sz[v])
            swap(u, v);

        long long paths = 1LL * sz[u] * sz[v];

        parent[v] = u;
        sz[u] += sz[v];

        return paths;
    }
};

class Solution {
public:
    vector<int> maximumWeight(int n, vector<vector<int>> edges,
                              vector<int> queries) {

        sort(edges.begin(), edges.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[2] < b[2];
             });

        int q = queries.size();

        vector<pair<int, int>> qry;
        for (int i = 0; i < q; i++)
            qry.push_back({queries[i], i});

        sort(qry.begin(), qry.end());

        vector<int> ans(q);
        DSU dsu(n);

        long long cur = 0;
        int j = 0;

        for (auto &it : qry) {
            int limit = it.first;
            int idx = it.second;

            while (j < edges.size() && edges[j][2] <= limit) {
                cur += dsu.unite(edges[j][0], edges[j][1]);
                j++;
            }

            ans[idx] = (int)cur;
        }

        return ans;
    }
};