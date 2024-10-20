#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    auto fibo = [&](auto fibo, int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else if (n == 0)
        {
            return 0;
        }

        return fibo(fibo, n - 1) + fibo(fibo, n - 2);
    };

    cout << fibo(fibo, n) << endl;
}