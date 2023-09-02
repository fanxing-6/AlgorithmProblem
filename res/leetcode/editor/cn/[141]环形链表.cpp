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


//<p>给你一个链表的头节点 <code>head</code> ，判断链表中是否有环。</p>
//
//<p>如果链表中有某个节点，可以通过连续跟踪 <code>next</code> 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 <code>pos</code> 来表示链表尾连接到链表中的位置（索引从 0 开始）。<strong>注意：<code>pos</code> 不作为参数进行传递&nbsp;</strong>。仅仅是为了标识链表的实际情况。</p>
//
//<p><em>如果链表中存在环</em>&nbsp;，则返回 <code>true</code> 。 否则，返回 <code>false</code> 。</p>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1：</strong></p>
//
//<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist.png" /></p>
//
//<pre>
//<strong>输入：</strong>head = [3,2,0,-4], pos = 1
//<strong>输出：</strong>true
//<strong>解释：</strong>链表中有一个环，其尾部连接到第二个节点。
//</pre>
//
//<p><strong>示例&nbsp;2：</strong></p>
//
//<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist_test2.png" /></p>
//
//<pre>
//<strong>输入：</strong>head = [1,2], pos = 0
//<strong>输出：</strong>true
//<strong>解释：</strong>链表中有一个环，其尾部连接到第一个节点。
//</pre>
//
//<p><strong>示例 3：</strong></p>
//
//<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist_test3.png" /></p>
//
//<pre>
//<strong>输入：</strong>head = [1], pos = -1
//<strong>输出：</strong>false
//<strong>解释：</strong>链表中没有环。
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li>链表中节点的数目范围是 <code>[0, 10<sup>4</sup>]</code></li> 
// <li><code>-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li> 
// <li><code>pos</code> 为 <code>-1</code> 或者链表中的一个 <strong>有效索引</strong> 。</li> 
//</ul>
//
//<p>&nbsp;</p>
//
//<p><strong>进阶：</strong>你能用 <code>O(1)</code>（即，常量）内存解决此问题吗？</p>
//
//<div><details><summary>Related Topics</summary><div><li>哈希表</li><li>链表</li><li>双指针</li></div></details></div>
//<div><li>👍 1971</li><li>👎 0</li></div>


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};



//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {


    }
};
//leetcode submit region end(Prohibit modification and deletion)
