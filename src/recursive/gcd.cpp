#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    auto gcd = [&](auto gcd, int x, int y)
    {
        if (y == 0)
        {
            return x;
        }

        return gcd(gcd, y, x % y);
    };
    cout << gcd(gcd, x, y) << endl;
}