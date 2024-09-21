#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int findABC(const string &str)
{
    int count = 0;
    string subStr = "ABC";
    size_t pos = str.find(subStr);

    while (pos != string::npos)
    {
        count++;
        pos = str.find(subStr, pos + subStr.length());
    }

    return count;
}

int main()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    int count = findABC(s);
    rep(i, q)
    {
        int x;
        char c;
        cin >> x >> c;

        if (s[x - 1] == c)
        {
            cout << count << endl;
            continue;
        }

        if (c == 'A')
        {
            if (x == 1)
            {
                cout << count << endl;
            }
            else if (x == 2)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
                else if (s[x] == 'B' && s[x + 1] == 'C')
                {
                    count++;
                }
            }
            else if (x < n - 1)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
                else if (s[x - 3] == 'A' && s[x - 2] == 'B' && s[x - 1] == 'C')
                {
                    count--;
                }
                else if (s[x] == 'B' && s[x + 1] == 'C')
                {
                    count++;
                }
            }
            else if (x == n - 1)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
                else if (s[x - 3] == 'A' && s[x - 2] == 'B' && s[x - 1] == 'C')
                {
                    count--;
                }
            }
            else if (x == n)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
        }
        else if (c == 'B')
        {
            if (x == 1)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
            }
            else if (x == 2)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                }
                else if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x] == 'C')
                {
                    count++;
                }
            }
            else if (x < n)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                }
                else if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x - 3] == 'A' && s[x - 2] == 'B' && s[x - 1] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x] == 'C')
                {
                    count++;
                }
            }
            else if (x == n)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                }
                else if (s[x - 3] == 'A' && s[x - 2] == 'B' && s[x - 1] == 'C')
                {
                    count--;
                }
            }
        }
        else if (c == 'C')
        {
            if (x == 1)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
            }
            else if (x == 2)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                }
                else if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
            }
            else
            {
                if (s[x - 3] == 'A' && s[x - 2] == 'B' && s[x - 1] == 'C')
                {
                }
                else if (s[x - 2] == 'A' && s[x] == 'C')
                {
                    count++;
                }
            }
        }
        else
        {
        }

        s[x - 1] = c;
    }

    return 0;
}