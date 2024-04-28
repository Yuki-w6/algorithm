#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a = 0;
    for (int i = 0; i < 9; ++i)
    {
        int n;
        cin >> n;
        a += n;
    }

    int b = 0;
    for (int i = 0; i < 8; ++i)
    {
        int n;
        cin >> n;
        b += n;
    }
    int ans = 0;
    if (a >= b)
    {
        ans = a - b + 1;
    }

    cout << ans << endl;
    return 0;
}