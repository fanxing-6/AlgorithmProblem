#include <iostream>
#include <vector>
#include <iostream>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <array>
#include <bitset>
#include <regex>

using namespace std;


const int N = 20;
int dp[N][N], n, m;
// n个盘子，m个苹果，dp[i][j]代表i个苹果，j个盘子有多少种放的方法

void solve() {
    while (cin >> m >> n) {
        memset(dp, 0, sizeof dp); // 清空我们的这个二维的dp数组
        for (int i = 1; i <= n; i++) dp[0][i] = 1; // 把苹果数量为1的，选法置为1
        for (int i = 1; i <= m; i++) dp[i][1] = 1; // 把盘子数置为1的，选法置为1
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (i < j) dp[i][j] = dp[i][i]; // 如果盘子数量大于苹果的数量，那么转移方程
                else dp[i][j] = dp[i - j][j] + dp[i][j - 1]; // 如果苹果数量大于等于盘子的数量，我们将他们转移为二者相加
            }
        }
        cout << dp[m][n] << "\n"; // 输出最后的答案
        return;
    }
}

signed main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    solve();
    return 0;
}