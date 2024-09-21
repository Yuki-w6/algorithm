#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> card(n);
    vector<vector<int>> vec(n, vector<int>(s));

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> card[i];
    }

    return 0;
}