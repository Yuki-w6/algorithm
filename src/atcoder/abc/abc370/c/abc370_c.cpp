#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;

    vector<string> v;

    // cout << s << t << endl;

    int count = 0;
    vector<int> index;
    rep (i, s.length()) {
        if (s[i] == t[i]) {
            continue;
        }
        index.push_back(i);
        count++;
    }

    int i = 0;
    string current = s;
    while(i < count) {
        i++;
        string word = current;
        int skipCount = 0;
        for (const int x : index) {
            // cout << "x: " << x << endl;
            if (word[x] < t[x] && skipCount < count - i) {
                skipCount++;
                continue;
            }
            // cout << "t[x]: " << t[x] << endl;
            word[x] = t[x];
            remove(index.begin(), index.end(), x);
            break;
        }
        v.push_back(word);
        current = word;
    }

    cout << count << endl;
    for (const auto& word : v) {
        cout << word << endl;
    }
    return 0;
}