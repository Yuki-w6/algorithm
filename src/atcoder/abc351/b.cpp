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

    vector<vector<char>> a(n, vector<char>(n));
    vector<vector<char>> b(n, vector<char>(n));

    for (int x = 0; x < n; ++x)
    {
        for (int y = 0; y < n; ++y)
        {
            cin >> a[x][y];
        }
    }

    for (int x = 0; x < n; ++x)
    {
        for (int y = 0; y < n; ++y)
        {
            cin >> b[x][y];
        }
    }

    int i, j;

    for (int x = 0; x < n; ++x)
    {
        for (int y = 0; y < n; ++y)
        {
            if (a[x][y] != b[x][y])
            {
                i = x + 1;
                j = y + 1;
                break;
            }
        }
    }

    cout << i << " " << j << endl;
    return 0;
}