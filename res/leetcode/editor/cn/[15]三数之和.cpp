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


//<p>给你一个整数数组 <code>nums</code> ，判断是否存在三元组 <code>[nums[i], nums[j], nums[k]]</code> 满足 <code>i != j</code>、<code>i != k</code> 且 <code>j != k</code> ，同时还满足 <code>nums[i] + nums[j] + nums[k] == 0</code> 。请</p>
//
//<p>你返回所有和为 <code>0</code> 且不重复的三元组。</p>
//
//<p><strong>注意：</strong>答案中不可以包含重复的三元组。</p>
//
//<p>&nbsp;</p>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>nums = [-1,0,1,2,-1,-4]
//<strong>输出：</strong>[[-1,-1,2],[-1,0,1]]
//<strong>解释：</strong>
//nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 。
//nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 。
//nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 。
//不同的三元组是 [-1,0,1] 和 [-1,-1,2] 。
//注意，输出的顺序和三元组的顺序并不重要。
//</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre>
//<strong>输入：</strong>nums = [0,1,1]
//<strong>输出：</strong>[]
//<strong>解释：</strong>唯一可能的三元组和不为 0 。
//</pre>
//
//<p><strong>示例 3：</strong></p>
//
//<pre>
//<strong>输入：</strong>nums = [0,0,0]
//<strong>输出：</strong>[[0,0,0]]
//<strong>解释：</strong>唯一可能的三元组和为 0 。
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>3 &lt;= nums.length &lt;= 3000</code></li> 
// <li><code>-10<sup>5</sup> &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>数组</li><li>双指针</li><li>排序</li></div></details></div>
//<div><li>👍 6314</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    }
};
//leetcode submit region end(Prohibit modification and deletion)
