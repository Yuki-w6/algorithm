#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int L, R;
    cin >> L >> R;

    string ans = "No";
    if (L == 1 && R == 0) {
        ans = "Yes";
    } else if ((L == 1 && R == 1 )|| (L == 0 && R == 0)) {
        ans ="Invalid";
    } 

    cout << ans << endl;
    return 0;
}