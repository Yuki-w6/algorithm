#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int getIndex(int i, int n)
{
    if (i > n - 1)
    {
        return i - n;
    }
    return i;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - k; i < 2 * n - k; i++)
    {
        if (i == n - k)
        {
            cout << a[getIndex(i, n)];
        }
        else
        {
            cout << " " << a[getIndex(i, n)];
        }
    }
    cout << endl;
}
