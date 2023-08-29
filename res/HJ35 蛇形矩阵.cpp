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

int main() {
    int N;
    cin >> N;  // 输入行数

    int num = 1;  // 用于填充矩阵的当前数字
    for(int i = 1; i <= N; ++i) {
        int output = num;  // 当前行要输出的第一个数字
        for(int j = i; j <= N; ++j) {
            cout << output << " ";  // 输出当前数字
            output += (j + 1);  // 计算下一个要输出的数字
        }
        cout << endl;  // 输出完一行后换行
        num += i;  // 更新用于填充矩阵的当前数字
    }

    return 0;
}