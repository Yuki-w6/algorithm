#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#include <string>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> people(n + 1);

    if (m == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        people[a].push_back(b);
        people[b].push_back(a);
    }

    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        int size = people[i].size();
        count += n - size - 1;
    }

    cout << count / 2 << endl;

    return 0;
}