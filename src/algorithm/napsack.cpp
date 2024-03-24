#include <iostream>
#include <vector>
using namespace std;

template <class T>
void chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
    }
}

int main()
{
    int N;
    long long W;
    cin >> N >> W;
    vector<long long> weight(N), value(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> weight[i] >> value[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    for (int i = 0; i < N; ++i)
    {
        for (int w = 0; w <= W; ++w)
        {
            // dp[i + 1][w]が変更対象
            // 編集対象の重さが、i個目の品目より重い場合（i個目を選ぶ場合）
            if (w - weight[i] >= 0)
            {
                // i個目を選ばない場合と選ぶ場合の比較
                chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
            }
            // i + 1個目を選ばない場合と、初期値の比較
            chmax(dp[i + 1][w], dp[i][w]);
        }
    }
}