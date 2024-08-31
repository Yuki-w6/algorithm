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

    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    int count = n + n - 1;
    rep(i, n)
    {
        rep(j, n)
        {
            int l = i + 1;
            int r = j + l + 2;
            if (r > n)
            {
                break;
            }

            int al = a[l - 1];
            int ar = a[r - 1];
            bool res = a[l] - al == ar - a[r - 2];

            // cout << "l: " << l << " " << "r: " << r << "res: " << res << endl;

            if (res)
            {
                count += r * (r - l) / 2;
            }
            else
            {
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}