#include <iostream>
using namespace std;

int GCD(int m, int n)
{
    // ベースケース
    if (n == 0)
    {
        return m;
    }

    return GCD(n, m % n);
}

int main()
{
    cout << GCD(3423, 32) << endl;
    cout << GCD(332, 434) << endl;
}