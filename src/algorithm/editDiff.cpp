// 2つの文字列S, Tが与えられます。Sに以下の3通りの操作を繰り返すことでTに変換したいものとします。
// そのような一連の操作のうち、操作回数の最小値を求めてください。
// なお、この最小値をSとTの編集距離と呼びます。
// 変更：S中の文字を１つ選んで任意の文字に変更する
// 削除：S中の文字を１つ選んで削除する
// 挿入：Sの好きな箇所に好きな文字を１文字挿入する =　Tの１文字を消す

// dp[i][j] Sの最初のi文字とTの最初のj文字との間の編集距離

// 変更(Sのi文字目とTのj文字目)
// S[i - 1] = T[j - 1] のとき：コスト０
// chmin(dp[i][j], dp[i-1][j-1] + 0)

// S[i - 1] != T[j - 1] のとき：コスト1
// chmin(dp[i][j], dp[i-1][j-1] + 1)

// 削除(Sのi文字目を削除)
// chmin(dp[i][j], dp[i-1][j] + 1)

// 挿入(Tのj文字目を削除)
// chmin(dp[i][j], dp[i][j-1] + 1)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>
void chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
    }
}

const int INF = 1 << 29; // 十分に大きな値（2^29)

int main()
{
    string S, T;
    cin >> S >> T;

    vector<vector<int>> dp(S.size() + 1, vector<int>(T.size() + 1, INF));

    // 初期条件(initial conditions)
    dp[0][0] = 0;

    for (int i = 0; i <= S.size(); ++i)
    {
        for (int j = 0; j <= T.size(); ++j)
        {
            // 変更操作
            if (i > 0 && j > 0)
            {
                if (S[i - 1] == T[j - 1])
                {
                    chmin(dp[i][j], dp[i - 1][j - 1]);
                }
                else
                {
                    chmin(dp[i][j], dp[i - 1][j - 1] + 1);
                }
            }

            if (i > 0)
            {
                chmin(dp[i][j], dp[i - 1][j] + 1);
            }

            if (j > 0)
            {
                chmin(dp[i][j], dp[i][j - 1] + 1);
            }
        }
    }

    cout << dp[S.size()][T.size()] << endl;
}
