#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int count = 0;
    int n = 12;
    rep(i, n)
    {
        string s;
        cin >> s;
        if (s.length() == i + 1)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}