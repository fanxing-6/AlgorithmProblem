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

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//<p><strong>斐波那契数</strong>&nbsp;（通常用&nbsp;<code>F(n)</code> 表示）形成的序列称为 <strong>斐波那契数列</strong> 。该数列由&nbsp;<code>0</code> 和 <code>1</code> 开始，后面的每一项数字都是前面两项数字的和。也就是：</p>
//
//<pre>
//F(0) = 0，F(1)&nbsp;= 1
//F(n) = F(n - 1) + F(n - 2)，其中 n &gt; 1
//</pre>
//
//<p>给定&nbsp;<code>n</code> ，请计算 <code>F(n)</code> 。</p>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>n = 2
//<strong>输出：</strong>1
//<strong>解释：</strong>F(2) = F(1) + F(0) = 1 + 0 = 1
//</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre>
//<strong>输入：</strong>n = 3
//<strong>输出：</strong>2
//<strong>解释：</strong>F(3) = F(2) + F(1) = 1 + 1 = 2
//</pre>
//
//<p><strong>示例 3：</strong></p>
//
//<pre>
//<strong>输入：</strong>n = 4
//<strong>输出：</strong>3
//<strong>解释：</strong>F(4) = F(3) + F(2) = 2 + 1 = 3
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>0 &lt;= n &lt;= 30</code></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>递归</li><li>记忆化搜索</li><li>数学</li><li>动态规划</li></div></details></div>
//<div><li>👍 685</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:

    int fib(int n) {
        if (n == 0) return 0;
        std::vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)
