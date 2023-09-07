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


//<p>给你两个单词&nbsp;<code>word1</code> 和&nbsp;<code>word2</code>， <em>请返回将&nbsp;<code>word1</code>&nbsp;转换成&nbsp;<code>word2</code> 所使用的最少操作数</em> &nbsp;。</p>
//
//<p>你可以对一个单词进行如下三种操作：</p>
//
//<ul> 
// <li>插入一个字符</li> 
// <li>删除一个字符</li> 
// <li>替换一个字符</li> 
//</ul>
//
//<p>&nbsp;</p>
//
//<p><strong>示例&nbsp;1：</strong></p>
//
//<pre>
//<strong>输入：</strong>word1 = "horse", word2 = "ros"
//<strong>输出：</strong>3
//<strong>解释：</strong>
//horse -&gt; rorse (将 'h' 替换为 'r')
//rorse -&gt; rose (删除 'r')
//rose -&gt; ros (删除 'e')
//</pre>
//
//<p><strong>示例&nbsp;2：</strong></p>
//
//<pre>
//<strong>输入：</strong>word1 = "intention", word2 = "execution"
//<strong>输出：</strong>5
//<strong>解释：</strong>
//intention -&gt; inention (删除 't')
//inention -&gt; enention (将 'i' 替换为 'e')
//enention -&gt; exention (将 'n' 替换为 'x')
//exention -&gt; exection (将 'n' 替换为 'c')
//exection -&gt; execution (插入 'u')
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>0 &lt;= word1.length, word2.length &lt;= 500</code></li> 
// <li><code>word1</code> 和 <code>word2</code> 由小写英文字母组成</li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>字符串</li><li>动态规划</li></div></details></div>
//<div><li>👍 3129</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDistance(string word1, string word2) {

    }
};
//leetcode submit region end(Prohibit modification and deletion)
