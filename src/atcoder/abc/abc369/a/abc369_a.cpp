#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }

    if (a == b)
    {
        cout << 1 << endl;
    }

    else if ((b - a) % 2 == 0)
    {
        cout << 3 << endl;
    }

    else if ((b - a) % 2 != 0)
    {
        cout << 2 << endl;
    }

    return 0;
}