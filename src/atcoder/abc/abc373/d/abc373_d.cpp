#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

struct Edge
{
    int to, w;
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> g(n);
    rep(i, m)
    {
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, -w);
    }

    vector<bool> selected(n);
    vector<ll> ans(n);

    rep(i, n)
    {
        if (selected[i])
        {
            continue;
        }
        auto dfs = [&](auto dfs, int v, ll val)
        {
            if (selected[v])
            {
                return;
            }
            selected[v] = true;
            ans[v] = val;
            for (Edge e : g[v])
            {
                dfs(dfs, e.to, val + e.w);
            }
        };
        dfs(dfs, i, 0);
    }

    rep(i, n)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;

    return 0;
}