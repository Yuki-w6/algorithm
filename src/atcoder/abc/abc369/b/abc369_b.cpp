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

    int h_l = 0;
    int h_r = 0;

    int p_l = -1;
    int p_r = -1;
    rep(i, n)
    {
        int p;
        char hand;
        cin >> p >> hand;

        if (hand == 'L')
        {
            if (p_l == -1)
            {
                p_l = p;
            }
            else
            {
                h_l += abs(p_l - p);
                p_l = p;
            }
        }
        else if (hand == 'R')
        {
            if (p_r == -1)
            {
                p_r = p;
            }
            else
            {
                h_r += abs(p_r - p);
                p_r = p;
            }
        }
    }

    cout << h_l + h_r << endl;
    return 0;
}