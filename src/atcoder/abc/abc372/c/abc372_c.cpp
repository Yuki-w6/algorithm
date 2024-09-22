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
        x--;

        if (s[x] == c)
        {
            cout << count << endl;
            continue;
        }

        if (c == 'A')
        {
            if (x == 0)
            {
                if (s[x] != 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count++;
                }
            }
            else if (x == 1)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                if (s[x] != 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count++;
                }
            }
            else if (x < n - 2)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
                if (s[x] != 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count++;
                }
            }
            else if (x == n - 2)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
            else if (x == n - 1)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
        }
        else if (c == 'B')
        {
            if (x == 0)
            {
                if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
            }
            else if (x == 1)
            {
                if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
                if (s[x - 1] == 'A' && s[x] != 'B' && s[x + 1] == 'C')
                {
                    count++;
                }
            }
            else if (x < n - 2)
            {
                if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
                if (s[x - 1] == 'A' && s[x] != 'B' && s[x + 1] == 'C')
                {
                    count++;
                }
            }
            else if (x == n - 2)
            {
                if (s[x - 1] == 'A' && s[x] != 'B' && s[x + 1] == 'C')
                {
                    count++;
                }
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
            else if (x == n - 1)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
        }
        else if (c == 'C')
        {
            if (x == 0)
            {
                if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
            }
            else if (x == 1)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
            }
            else if (x < n - 2)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] != 'C')
                {
                    count++;
                }
            }
            else if (x == n - 2)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] != 'C')
                {
                    count++;
                }
            }
            else if (x == n - 1)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] != 'C')
                {
                    count++;
                }
            }
        }
        else
        {
            if (x == 0)
            {
                if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
            }
            else if (x == 1)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
            }
            else if (x < n - 2)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
            else if (x == n - 2)
            {
                if (s[x - 1] == 'A' && s[x] == 'B' && s[x + 1] == 'C')
                {
                    count--;
                }
                else if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
            else if (x == n - 1)
            {
                if (s[x - 2] == 'A' && s[x - 1] == 'B' && s[x] == 'C')
                {
                    count--;
                }
            }
        }
        s[x] = c;
        cout << count << endl;
    }

    return 0;
}