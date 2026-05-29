#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int v) {
    vis[v] = true;

    for (int u : adj[v]) {
        if (!vis[u]) {
            dfs(u);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    adj.resize(n);
    vis.assign(n, false);

    while (m--) {
        int a, b;
        cin >> a >> b;

        --a;
        --b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i);
            ans++;
        }
    }

    cout << ans << '\n';
}
