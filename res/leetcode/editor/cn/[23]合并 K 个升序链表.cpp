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


//<p>给你一个链表数组，每个链表都已经按升序排列。</p>
//
//<p>请你将所有链表合并到一个升序链表中，返回合并后的链表。</p>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1：</strong></p>
//
//<pre><strong>输入：</strong>lists = [[1,4,5],[1,3,4],[2,6]]
//<strong>输出：</strong>[1,1,2,3,4,4,5,6]
//<strong>解释：</strong>链表数组如下：
//[
//  1-&gt;4-&gt;5,
//  1-&gt;3-&gt;4,
//  2-&gt;6
//]
//将它们合并到一个有序链表中得到。
//1-&gt;1-&gt;2-&gt;3-&gt;4-&gt;4-&gt;5-&gt;6
//</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre><strong>输入：</strong>lists = []
//<strong>输出：</strong>[]
//</pre>
//
//<p><strong>示例 3：</strong></p>
//
//<pre><strong>输入：</strong>lists = [[]]
//<strong>输出：</strong>[]
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>k == lists.length</code></li> 
// <li><code>0 &lt;= k &lt;= 10^4</code></li> 
// <li><code>0 &lt;= lists[i].length &lt;= 500</code></li> 
// <li><code>-10^4 &lt;= lists[i][j] &lt;= 10^4</code></li> 
// <li><code>lists[i]</code> 按 <strong>升序</strong> 排列</li> 
// <li><code>lists[i].length</code> 的总和不超过 <code>10^4</code></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>链表</li><li>分治</li><li>堆（优先队列）</li><li>归并排序</li></div></details></div>
//<div><li>👍 2618</li><li>👎 0</li></div>
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


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

    struct compare {
        bool operator()(const ListNode *a, const ListNode *b) {
            return a->val > b->val;
        }
    };

    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.empty()) return nullptr;

        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;

        std::priority_queue<ListNode *, std::vector<ListNode *>, compare> pq;

        for (ListNode *head: lists) {
            if (head != nullptr) {
                pq.push(head);
            }
        }
        while (!pq.empty()) {
            ListNode *node = pq.top();
            pq.pop();
            p->next = node;

            if (node->next != nullptr) {
                pq.push(node->next);
            }
            p = p->next;
        }
        return dummy->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
