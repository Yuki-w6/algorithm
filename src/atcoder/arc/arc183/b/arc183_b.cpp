#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int t;
    cin >> t;

    rep(i, t)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        rep(i, n)
        {
            cin >> a[i];
        }

        rep(i, n)
        {
            cin >> b[i];
        }
    }

    int ans = 0;

    cout << ans << endl;
    return 0;
}