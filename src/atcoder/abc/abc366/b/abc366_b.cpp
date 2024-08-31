#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<string> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int m = 0;
    for (auto &s : t)
    {
        m = max(m, (int)s.size());
    }

    vector<string> ans(m, string(n, '*'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (int)t[i].size(); j++)
        {
            ans[j][n - i - 1] = t[i][j];
        }
    }

    for (int i = 0; i < m; ++i)
    {
        while (ans[i].back() == '*')
        {
            ans[i].pop_back();
        }
        cout << ans[i] << endl;
    }

    return 0;
}