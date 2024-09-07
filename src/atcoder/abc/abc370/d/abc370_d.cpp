#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    int h, w, q;
    cin >> h >> w >> q;

    vector<int> R;
    vector<int> C;
    rep(i, q) {
        int r, c;
        cin >> r >> c;
        auto isFindR = find(R.begin(), R.end(), r);
        auto isFindC = find(C.begin(), C.end(), c)
        if (isFindR == R.end() && isFindC == C.end()) {
            R.push_back(r);
            C.push_back(c);
        }
    }

    cout << ans << endl;
    return 0;
}