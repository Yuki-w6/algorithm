#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    int nk = n * k;

    vector<int> v;
    int start;
    if (n % 2 == 0)
    {
        start = n / 2;
    }
    else
    {
        start = (n + 1) / 2;
    }
    v.push_back(start);
    int count = 1;
    rep(i, n)
    {
        rep(j, k)
        {
            int num = n - i - 1;
            if (count == 1 && num == start)
            {
                count--;
                continue;
            }
            else
            {
                v.push_back(n - i - 1);
            }
        }
    }

    rep(i, nk)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << v[i];
    }
    cout << endl;

    return 0;
}
