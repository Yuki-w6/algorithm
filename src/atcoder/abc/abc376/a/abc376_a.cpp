#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int n, c;
    cin >> n >> c;

    int pre = -1;

    int ans = 0;
    rep(i, n)
    {
        int sec;
        cin >> sec;
        if (pre == -1)
        {
            pre = sec;
            ans++;
        }
        else if (sec - pre >= c)
        {
            pre = sec;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}