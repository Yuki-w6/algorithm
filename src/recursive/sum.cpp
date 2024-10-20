#include <iostream>
using namespace std;

int main()
{
    auto recursive = [&](auto recursive, int n)
    {
        if (n == 0)
        {
            return 0;
        }

        return n + recursive(recursive, n - 1);
    };
    cout << recursive(recursive, 5) << endl;
}