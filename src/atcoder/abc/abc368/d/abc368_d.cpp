#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> to(n);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<int> selected(k);
    rep(i, k) cin >> selected[i], selected[i]--;
    vector<bool> isSelected(n);
    rep(i, k) isSelected[selected[i]] = true;

    vector<int> num(n);
    vector<bool> isVisited(n);
    auto dfs = [&](auto dfs, int v) -> void
    {
        isVisited[v] = true;
        if (isSelected[v])
            num[v]++;
        for (int u : to[v])
        {
            if (isVisited[u])
            {
                continue;
            }
            dfs(dfs, u);
            num[v] += num[u];
        }
    };
    dfs(dfs, selected[0]);

    int ans = 0;
    rep(i, n) if (num[i] > 0) ans++;
    cout << ans << endl;
}