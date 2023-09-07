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


//<p>给你一个字符串&nbsp;<code>s</code>&nbsp;和一个字符规律&nbsp;<code>p</code>，请你来实现一个支持 <code>'.'</code>&nbsp;和&nbsp;<code>'*'</code>&nbsp;的正则表达式匹配。</p>
//
//<ul> 
// <li><code>'.'</code> 匹配任意单个字符</li> 
// <li><code>'*'</code> 匹配零个或多个前面的那一个元素</li> 
//</ul>
//
//<p>所谓匹配，是要涵盖&nbsp;<strong>整个&nbsp;</strong>字符串&nbsp;<code>s</code>的，而不是部分字符串。</p> &nbsp;
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>s = "aa", p = "a"
//<strong>输出：</strong>false
//<strong>解释：</strong>"a" 无法匹配 "aa" 整个字符串。
//</pre>
//
//<p><strong>示例 2:</strong></p>
//
//<pre>
//<strong>输入：</strong>s = "aa", p = "a*"
//<strong>输出：</strong>true
//<strong>解释：</strong>因为 '*' 代表可以匹配零个或多个前面的那一个元素, 在这里前面的元素就是 'a'。因此，字符串 "aa" 可被视为 'a' 重复了一次。
//</pre>
//
//<p><strong>示例&nbsp;3：</strong></p>
//
//<pre>
//<strong>输入：</strong>s = "ab", p = ".*"
//<strong>输出：</strong>true
//<strong>解释：</strong>".*" 表示可匹配零个或多个（'*'）任意字符（'.'）。
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>1 &lt;= s.length&nbsp;&lt;= 20</code></li> 
// <li><code>1 &lt;= p.length&nbsp;&lt;= 20</code></li> 
// <li><code>s</code>&nbsp;只包含从&nbsp;<code>a-z</code>&nbsp;的小写字母。</li> 
// <li><code>p</code>&nbsp;只包含从&nbsp;<code>a-z</code>&nbsp;的小写字母，以及字符&nbsp;<code>.</code>&nbsp;和&nbsp;<code>*</code>。</li> 
// <li>保证每次出现字符&nbsp;<code>*</code> 时，前面都匹配到有效的字符</li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>递归</li><li>字符串</li><li>动态规划</li></div></details></div>
//<div><li>👍 3710</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();

        auto matches = [&](int i, int j) {
            if (i == 0) {
                return false;
            }
            if (p[j - 1] == '.') {
                return true;
            }
            return s[i - 1] == p[j - 1];
        };

        vector<vector<int>> f(m + 1, vector<int>(n + 1));
        f[0][0] = true;
        for (int i = 0; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == '*') {
                    f[i][j] |= f[i][j - 2];
                    if (matches(i, j - 1)) {
                        f[i][j] |= f[i - 1][j];
                    }
                }
                else {
                    if (matches(i, j)) {
                        f[i][j] |= f[i - 1][j - 1];
                    }
                }
            }
        }
        return f[m][n];
    }
};

//leetcode submit region end(Prohibit modification and deletion)
