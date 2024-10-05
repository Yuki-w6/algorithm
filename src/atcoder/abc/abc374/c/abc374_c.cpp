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

    vector<int> k(n);
    int total = 0;
    rep(i, n)
    {
        cin >> k[i];
        total += k[i];
    }

    int min_diff = total;

    auto dfs = [&](auto dfs, int i, int sum_a)
    {
        if (i == n - 1)
        {
            int sum_b = total - sum_a;
            int diff = abs(sum_a - sum_b);
            min_diff = min(min_diff, diff);
            return;
        }

        dfs(dfs, i + 1, sum_a + k[i]);
        dfs(dfs, i + 1, sum_a);
    };
    dfs(dfs, 0, 0);

    int larger_sum = (total + min_diff) / 2;
    cout << larger_sum << endl;

    return 0;
}
