#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = 1; i < 10; i++)
    {
        if (i != a + b)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}