#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int getDiff(int p, int left, int right, char hand, int t)
{
    int d = -1;
    if (hand == 'L')
    {
        int tr = 0;
        int copy = left;
        while (copy != t)
        {
            if (copy == p)
            {
                copy = 1;
            }
            else
            {
                copy++;
            }

            tr++;
            if (copy == right)
            {
                tr = -1;
                break;
            }
            // cout << "left: " << copy << " tr: " << tr << endl;
        }
        int tl = 0;
        if (tr == -1)
        {
            copy = left;
            while (copy != t)
            {
                if (copy == 1)
                {
                    copy = p;
                }
                else
                {
                    copy--;
                }
                tl++;
                if (copy == right)
                {
                    tl = -1;
                    break;
                }
                // cout << "left: " << copy << " tl : " << tl << endl;
            }
        }

        if (tr > tl)
        {
            d = tr;
        }
        else
        {
            d = tl;
        }
    }
    else
    {
        int tr = 0;
        int copy = right;
        while (copy != t)
        {
            if (copy == p)
            {
                copy = 1;
            }
            else
            {
                copy++;
            }

            tr++;
            if (copy == left)
            {
                tr = -1;
                break;
            }
        }

        int tl = 0;
        if (tr == -1)
        {
            copy = right;
            while (copy != t)
            {
                if (copy == 1)
                {
                    copy = p;
                }
                else
                {
                    copy--;
                }

                tl++;
                if (copy == left)
                {
                    tl = -1;
                    break;
                }
            }
        }

        if (tr > tl)
        {
            d = tr;
        }
        else
        {
            d = tl;
        }
    }

    return d;
}

int main()
{
    int p, q;
    cin >> p >> q;

    int ans = 0;
    int left = 1;
    int right = 2;
    rep(i, q)
    {
        char hand;
        int t;
        cin >> hand >> t;
        ans += getDiff(p, left, right, hand, t);
        // cout << "ans: " << ans << endl;
        if (hand == 'L')
        {
            left = t;
        }
        else
        {
            right = t;
        }
    }

    cout << ans << endl;
}