#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, q;
    cin >> n >> q;

    int count = n;
    vector<bool> tooth(n, true);

    vector<int> t(q);
    for (int i = 0; i < q; ++i)
    {
        cin >> t[i];
    }

    for (int ex : t)
    {
        if (tooth[ex])
        {
            tooth[ex] = false;
            --count;
        }
        else
        {
            tooth[ex] = true;
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}