#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= s)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}