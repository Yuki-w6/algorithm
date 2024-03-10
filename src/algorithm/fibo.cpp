#include <iostream>
#include <vector>
using namespace std;

// fibo(N) の答えをメモ化する配列
vector<long long> memo;

long long fibo(int N)
{
    cout << "fibo(" << N << ")を呼び出しました" << endl;

    // ベースケース
    if (N == 0)
    {
        return 0;
    }
    else if (N == 1)
    {
        return 1;
    }

    if (memo[N] != -1)
    {
        return memo[N];
    }

    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main()
{
    memo.assign(50, -1);

    fibo(49);

    for (int N = 2; N < 50; ++N)
    {
        cout << N << "項目: " << memo[N] << endl;
    }
}