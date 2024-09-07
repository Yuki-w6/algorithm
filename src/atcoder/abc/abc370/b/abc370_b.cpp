#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> genso(n);
    rep(i, n) {
        genso[i].resize(i + 1);
        rep(j, i + 1) {
            cin >> genso[i][j];
        }
    }

    int i = genso[0][0];
    for (int j = 2; j < n + 1; j++) {
        // cout << "i: " << i << "j: " << j << endl;
        if (i >= j) {
            i = genso[i - 1][j - 1];
        } else {
            i = genso[j - 1][i - 1];
        }
    }

    cout << i << endl;
    return 0;
}