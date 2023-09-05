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


//<p>给你一个下标从 <strong>1</strong> 开始的整数数组&nbsp;<code>numbers</code> ，该数组已按<strong><em> </em>非递减顺序排列&nbsp; </strong>，请你从数组中找出满足相加之和等于目标数&nbsp;<code>target</code> 的两个数。如果设这两个数分别是 <code>numbers[index<sub>1</sub>]</code> 和 <code>numbers[index<sub>2</sub>]</code> ，则 <code>1 &lt;= index<sub>1</sub> &lt; index<sub>2</sub> &lt;= numbers.length</code> 。</p>
//
//<p>以长度为 2 的整数数组 <code>[index<sub>1</sub>, index<sub>2</sub>]</code> 的形式返回这两个整数的下标 <code>index<sub>1</sub></code><em> </em>和<em> </em><code>index<sub>2</sub></code>。</p>
//
//<p>你可以假设每个输入 <strong>只对应唯一的答案</strong> ，而且你 <strong>不可以</strong> 重复使用相同的元素。</p>
//
//<p>你所设计的解决方案必须只使用常量级的额外空间。</p> &nbsp;
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>numbers = [<strong><em>2</em></strong>,<strong><em>7</em></strong>,11,15], target = 9
//<strong>输出：</strong>[1,2]
//<strong>解释：</strong>2 与 7 之和等于目标数 9 。因此 index<sub>1</sub> = 1, index<sub>2</sub> = 2 。返回 [1, 2] 。</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre>
//<strong>输入：</strong>numbers = [<strong><em>2</em></strong>,3,<strong><em>4</em></strong>], target = 6
//<strong>输出：</strong>[1,3]
//<strong>解释：</strong>2 与 4 之和等于目标数 6 。因此 index<sub>1</sub> = 1, index<sub>2</sub> = 3 。返回 [1, 3] 。</pre>
//
//<p><strong>示例 3：</strong></p>
//
//<pre>
//<strong>输入：</strong>numbers = [<strong><em>-1</em></strong>,<strong><em>0</em></strong>], target = -1
//<strong>输出：</strong>[1,2]
//<strong>解释：</strong>-1 与 0 之和等于目标数 -1 。因此 index<sub>1</sub> = 1, index<sub>2</sub> = 2 。返回 [1, 2] 。
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>2 &lt;= numbers.length &lt;= 3 * 10<sup>4</sup></code></li> 
// <li><code>-1000 &lt;= numbers[i] &lt;= 1000</code></li> 
// <li><code>numbers</code> 按 <strong>非递减顺序</strong> 排列</li> 
// <li><code>-1000 &lt;= target &lt;= 1000</code></li> 
// <li><strong>仅存在一个有效答案</strong></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>数组</li><li>双指针</li><li>二分查找</li></div></details></div>
//<div><li>👍 1122</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int left{0};
        int right{static_cast<int>(numbers.size() - 1)};

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return vector<int>{left + 1, right + 1};
            } else if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            }
        }
        return vector<int>{-1, -1};

    }
};
//leetcode submit region end(Prohibit modification and deletion)
