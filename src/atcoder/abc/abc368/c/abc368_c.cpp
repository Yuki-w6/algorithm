#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    ll T = 0;

    for (int a : A)
    {
        int num = a / 5;
        T += num * 3;
        a -= num * 5;

        while (a > 0)
        {
            T++;
            if (T % 3 == 0)
            {
                a -= 3;
            }
            else
            {
                a -= 1;
            }
        }
    }

    cout << T << endl;

    return 0;
}
