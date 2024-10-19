#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit)
    {
        int sum = 0;

        // ビット（bit）に対応する項を足していく（例：00010011なら、１、２、５番目の項を足す）
        for (int i = 0; i < N; ++i)
        {
            if (bit & (i << i))
            {
                sum += a[i];
            }
        }

        if (sum == W)
        {
            exist = true;
            break;
        }
    }

    if (exist)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
