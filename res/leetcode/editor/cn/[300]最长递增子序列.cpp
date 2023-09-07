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


//<p>给你一个整数数组 <code>nums</code> ，找到其中最长严格递增子序列的长度。</p>
//
//<p><strong>子序列&nbsp;</strong>是由数组派生而来的序列，删除（或不删除）数组中的元素而不改变其余元素的顺序。例如，<code>[3,6,2,7]</code> 是数组 <code>[0,3,1,6,2,2,7]</code> 的子序列。</p> &nbsp;
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>nums = [10,9,2,5,3,7,101,18]
//<strong>输出：</strong>4
//<strong>解释：</strong>最长递增子序列是 [2,3,7,101]，因此长度为 4 。
//</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre>
//<strong>输入：</strong>nums = [0,1,0,3,2,3]
//<strong>输出：</strong>4
//</pre>
//
//<p><strong>示例 3：</strong></p>
//
//<pre>
//<strong>输入：</strong>nums = [7,7,7,7,7,7,7]
//<strong>输出：</strong>1
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>1 &lt;= nums.length &lt;= 2500</code></li> 
// <li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li> 
//</ul>
//
//<p>&nbsp;</p>
//
//<p><b>进阶：</b></p>
//
//<ul> 
// <li>你能将算法的时间复杂度降低到&nbsp;<code>O(n log(n))</code> 吗?</li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>数组</li><li>二分查找</li><li>动态规划</li></div></details></div>
//<div><li>👍 3382</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        vector<int> dp(nums.size(), 1);
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)
