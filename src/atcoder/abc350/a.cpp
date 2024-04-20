#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#include <string>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;

    string abc = s.substr(0, 3);
    string number_str = s.substr(3, 3);
    int number = stoi(number_str);

    if (number < 350)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}