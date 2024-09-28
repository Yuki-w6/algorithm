#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    vector<int> am(26, -1);

    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            am[c - 'A'] = i;
        }
    }

    int ans = 0;
    int prevIndex = -1;

    for (int i = 0; i < 26; i++)
    {
        if (am[i] != -1)
        {
            if (prevIndex != -1)
            {
                ans += abs(am[i] - prevIndex);
            }
            prevIndex = am[i];
        }
    }

    cout << ans << endl;
    return 0;
}
