#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % x == 0 || i % y == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}