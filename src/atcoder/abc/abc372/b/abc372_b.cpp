#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int m;
    cin >> m;

    int n = 0;
    vector<int> a;
    int x = 10;

    while (n <= 20)
    {
        int num = pow(3, x);
        // cout << "num: " << num << endl;
        if (m >= num)
        {
            n++;
            a.push_back(x);
            m -= num;
        }
        else
        {
            x--;
        }

        // cout << "m: " << m << endl;

        if (m == 0)
        {
            break;
        }
    }

    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;

    return 0;
}