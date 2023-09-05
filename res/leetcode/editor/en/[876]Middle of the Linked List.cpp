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


//<p>Given the <code>head</code> of a singly linked list, return <em>the middle node of the linked list</em>.</p>
//
//<p>If there are two middle nodes, return <strong>the second middle</strong> node.</p>
//
//<p>&nbsp;</p> 
//<p><strong class="example">Example 1:</strong></p> 
//<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist1.jpg" style="width: 544px; height: 65px;" /> 
//<pre>
//<strong>Input:</strong> head = [1,2,3,4,5]
//<strong>Output:</strong> [3,4,5]
//<strong>Explanation:</strong> The middle node of the list is node 3.
//</pre>
//
//<p><strong class="example">Example 2:</strong></p> 
//<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-midlist2.jpg" style="width: 664px; height: 65px;" /> 
//<pre>
//<strong>Input:</strong> head = [1,2,3,4,5,6]
//<strong>Output:</strong> [4,5,6]
//<strong>Explanation:</strong> Since the list has two middle nodes with values 3 and 4, we return the second one.
//</pre>
//
//<p>&nbsp;</p> 
//<p><strong>Constraints:</strong></p>
//
//<ul> 
// <li>The number of nodes in the list is in the range <code>[1, 100]</code>.</li> 
// <li><code>1 &lt;= Node.val &lt;= 100</code></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>Linked List</li><li>Two Pointers</li></div></details></div>
//<div><li>👍 10385</li><li>👎 307</li></div>

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
