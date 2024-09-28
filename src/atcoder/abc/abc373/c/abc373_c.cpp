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

    ll am = -9999999999;
    ll bm = -9999999999;
    int a, b;
    rep(i, n)
    {
        cin >> a;
        if (am < a)
        {
            am = a;
        }
    }

    rep(i, n)
    {
        cin >> b;
        if (bm < b)
        {
            bm = b;
        }
    }

    int ans = am + bm;

    cout << ans << endl;
    return 0;
}