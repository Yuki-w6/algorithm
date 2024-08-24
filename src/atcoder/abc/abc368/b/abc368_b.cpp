#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int countPositive(int *a, int size)
{
    int positiveCount = count_if(a, a + size, [](int x)
                                 { return x > 0; });
    return positiveCount;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int positiveCount = n;
    int count = 0;
    while (positiveCount > 1)
    {
        sort(a, a + n, greater<int>());
        a[0] = a[0] - 1;
        a[1] = a[1] - 1;
        positiveCount = countPositive(a, n);
        count++;
    }

    cout << count << endl;
    return 0;
}