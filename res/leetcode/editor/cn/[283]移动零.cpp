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


//<p>给定一个数组 <code>nums</code>，编写一个函数将所有 <code>0</code> 移动到数组的末尾，同时保持非零元素的相对顺序。</p>
//
//<p><strong>请注意</strong>&nbsp;，必须在不复制数组的情况下原地对数组进行操作。</p>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1:</strong></p>
//
//<pre>
//<strong>输入:</strong> nums = <span><code>[0,1,0,3,12]</code></span>
//<strong>输出:</strong> <span><code>[1,3,12,0,0]</code></span>
//</pre>
//
//<p><strong>示例 2:</strong></p>
//
//<pre>
//<strong>输入:</strong> nums = <span><code>[0]</code></span>
//<strong>输出:</strong> <span><code>[0]</code></span></pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示</strong>:</p> 
//<meta charset="UTF-8" />
//
//<ul> 
// <li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li> 
// <li><code>-2<sup>31</sup>&nbsp;&lt;= nums[i] &lt;= 2<sup>31</sup>&nbsp;- 1</code></li> 
//</ul>
//
//<p>&nbsp;</p>
//
//<p><b>进阶：</b>你能尽量减少完成的操作次数吗？</p>
//
//<div><details><summary>Related Topics</summary><div><li>数组</li><li>双指针</li></div></details></div>
//<div><li>👍 2146</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        if (nums.empty()) return;

        int slow{0};
        int fast{0};

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[fast] != 0) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        };
        for (int i = slow; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
