#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;

    const size_t sl = s.length();
    const size_t tl = t.length();

    int n = 0;
    if (sl < tl)
    {
        n = tl;
    }
    else
    {
        n = sl;
    }

    int ans = 0;
    rep(i, n)
    {
        if (i > sl - 1)
        {
            ans = i + 1;
            break;
        }
        else if (i > tl - 1)
        {
            ans = i + 1;
            break;
        }
        else if (s[i] != t[i])
        {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}