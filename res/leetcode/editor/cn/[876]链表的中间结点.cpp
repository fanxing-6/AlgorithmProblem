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


//<p>给你单链表的头结点 <code>head</code> ，请你找出并返回链表的中间结点。</p>
//
//<p>如果有两个中间结点，则返回第二个中间结点。</p>
//
//<p>&nbsp;</p>
//
//<p><strong class="example">示例 1：</strong></p> 
//<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist1.jpg" style="width: 544px; height: 65px;" /> 
//<pre>
//<strong>输入：</strong>head = [1,2,3,4,5]
//<strong>输出：</strong>[3,4,5]
//<strong>解释：</strong>链表只有一个中间结点，值为 3 。
//</pre>
//
//<p><strong class="example">示例 2：</strong></p> 
//<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist2.jpg" style="width: 664px; height: 65px;" /> 
//<pre>
//<strong>输入：</strong>head = [1,2,3,4,5,6]
//<strong>输出：</strong>[4,5,6]
//<strong>解释：</strong>该链表有两个中间结点，值分别为 3 和 4 ，返回第二个结点。
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li>链表的结点数范围是 <code>[1, 100]</code></li> 
// <li><code>1 &lt;= Node.val &lt;= 100</code></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>链表</li><li>双指针</li></div></details></div>
//<div><li>👍 932</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *middleNode(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
