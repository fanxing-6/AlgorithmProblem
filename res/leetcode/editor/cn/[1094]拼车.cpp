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


//<p>车上最初有&nbsp;<code>capacity</code>&nbsp;个空座位。车&nbsp;<strong>只能&nbsp;</strong>向一个方向行驶（也就是说，<strong>不允许掉头或改变方向</strong>）</p>
//
//<p>给定整数&nbsp;<code>capacity</code>&nbsp;和一个数组 <code>trips</code> , &nbsp;<code>trip[i] = [numPassengers<sub>i</sub>, from<sub>i</sub>, to<sub>i</sub>]</code>&nbsp;表示第 <code>i</code> 次旅行有&nbsp;<code>numPassengers<sub>i</sub></code>&nbsp;乘客，接他们和放他们的位置分别是&nbsp;<code>from<sub>i</sub></code>&nbsp;和&nbsp;<code>to<sub>i</sub></code>&nbsp;。这些位置是从汽车的初始位置向东的公里数。</p>
//
//<p>当且仅当你可以在所有给定的行程中接送所有乘客时，返回&nbsp;<code>true</code>，否则请返回 <code>false</code>。</p>
//
//<p>&nbsp;</p>
//
//<p><strong>示例 1：</strong></p>
//
//<pre>
//<strong>输入：</strong>trips = [[2,1,5],[3,3,7]], capacity = 4
//<strong>输出：</strong>false
//</pre>
//
//<p><strong>示例 2：</strong></p>
//
//<pre>
//<strong>输入：</strong>trips = [[2,1,5],[3,3,7]], capacity = 5
//<strong>输出：</strong>true
//</pre>
//
//<p>&nbsp;</p>
//
//<p><strong>提示：</strong></p>
//
//<ul> 
// <li><code>1 &lt;= trips.length &lt;= 1000</code></li> 
// <li><code>trips[i].length == 3</code></li> 
// <li><code>1 &lt;= numPassengers<sub>i</sub>&nbsp;&lt;= 100</code></li> 
// <li><code>0 &lt;= from<sub>i</sub>&nbsp;&lt; to<sub>i</sub>&nbsp;&lt;= 1000</code></li> 
// <li><code>1 &lt;= capacity &lt;= 10<sup>5</sup></code></li> 
//</ul>
//
//<div><details><summary>Related Topics</summary><div><li>数组</li><li>前缀和</li><li>排序</li><li>模拟</li><li>堆（优先队列）</li></div></details></div>
//<div><li>👍 269</li><li>👎 0</li></div>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool carPooling(vector<vector<int>> &trips, int capacity) {
        vector<int> diff(1005, 0);
        for (auto &trip: trips) {
            diff[trip[1]] += trip[0];
            diff[trip[2]] -= trip[0];
        }
        int temp{0};
        for (auto &d: diff) {
            temp += d;
            if (temp > capacity) return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
