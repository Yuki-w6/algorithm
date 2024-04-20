#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        // if (a[i] != i + 1)
        // {
        //     ++count;
        // }
    }

    // int ans;
    // if (count % 2 == 0)
    // {
    //     ans = count / 2;
    // }
    // else
    // {
    //     ans = count / 2 + 1;
    // }

    // cout << ans << endl;

    vector<pair<int, int>> op;

    for (int i = 0; i < n; ++i)
    {
        while (a[i] != i + 1)
        {
            int target_index = a[i] - 1;
            swap(a[i], a[target_index]);
            op.emplace_back(i + 1, target_index + 1);
        }
    }

    cout << op.size() << endl;
    for (auto &o : op)
    {
        cout << o.first << ' ' << o.second << endl;
    }

    return 0;
}