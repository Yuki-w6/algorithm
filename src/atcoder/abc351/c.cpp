#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#include <cmath>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    vector<double> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    double right_one;
    double right_two;
    int count = 0;
    vector<double> l(n);
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            l.push_back(pow(2, a[i]));
            count++;
            continue;
        }
        l.push_back(pow(2, a[i]));

        count++;

        // cout << sizeof(l) / sizeof(l[0]) << endl;

        while (count != 1 || l.back() == l.at(count - 2))
        {
            l.back() = l.back() * 2;
            l.erase(l.end() - 2);
            count--;
        }
    }
    int ans = count;

    cout << ans << endl;
    return 0;
}