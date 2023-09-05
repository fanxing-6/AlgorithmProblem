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


//<p>给你一个字符串 <code>s</code> 、一个字符串 <code>t</code> 。返回 <code>s</code> 中涵盖 <code>t</code> 所有字符的最小子串。如果 <code>s</code> 中不存在涵盖 <code>t</code> 所有字符的子串，则返回空字符串 <code>""</code> 。</p>
//
//<p>&nbsp;</p>
//
//<p><strong>注意：</strong></p>
//
//<ul> 
// <li>对于 <code>t</code> 中重复字符，我们寻找的子字符串中该字符数量必须不少于 <code>t</code> 中该字符数量。</li> 
// <li>如果 <code>s</code> 中存在这样的子串，我们保证它是唯一的答案。</li> 
//</ul>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>s = "ADOBECODEBANC", t = "ABC"
//<strong>输出：</strong>"BANC"
//<strong>解释：</strong>最小覆盖子串 "BANC" 包含来自字符串 t 的 'A'、'B' 和 'C'。
//</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre>
//<strong>输入：</strong>s = "a", t = "a"
//<strong>输出：</strong>"a"
//<strong>解释：</strong>整个字符串 s 是最小覆盖子串。
//</pre>
//
//<p><strong>示例 3:</strong></p>
//
//<pre>
//<strong>输入:</strong> s = "a", t = "aa"
//<strong>输出:</strong> ""
//<strong>解释:</strong> t 中两个字符 'a' 均应包含在 s 的子串中，
//因此没有符合条件的子字符串，返回空字符串。</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code><sup>m == s.length</sup></code></li> 
// <li><code><sup>n == t.length</sup></code></li> 
// <li><code>1 &lt;= m, n &lt;= 10<sup>5</sup></code></li> 
// <li><code>s</code> 和 <code>t</code> 由英文字母组成</li> 
//</ul>
//
//<p>&nbsp;</p> 
//<strong>进阶：</strong>你能设计一个在 
//<code>o(m+n)</code> 时间内解决此问题的算法吗？
//
//<div><details><summary>Related Topics</summary><div><li>哈希表</li><li>字符串</li><li>滑动窗口</li></div></details></div>
//<div><li>👍 2637</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> need, windows;
        for (auto &c: t)
            need[c]++;

        int left{0}, right{0};
        int valid{0};
        int start{0};
        int len = INT_MAX;

        while (right < s.size()) {
            char c = s[right];

        }

    }
};
//leetcode submit region end(Prohibit modification and deletion)
