#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;

    s.erase(remove(s.begin(), s.end(), '.'), s.end());
    cout << s << endl;
    return 0;
}