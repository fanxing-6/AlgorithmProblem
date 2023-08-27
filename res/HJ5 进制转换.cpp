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

using namespace std;

int main(){
    string str;          // 定义一个字符串来保存输入
    cin >> str;          // 从标准输入读取字符串
    cout << stoi(str,0,16); // 使用stoi函数将字符串解释为十六进制数，并输出其十进制值
}