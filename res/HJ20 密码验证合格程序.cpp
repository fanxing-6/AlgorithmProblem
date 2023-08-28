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

    string s;
    while (cin >> s) {
        if (s.length() <= 8) {
            cout << "NG" << endl;
            continue;
        }
        bitset<4> bin;
        for (auto c: s) {
            if (c >= '0' && c <= '9') {
                bin.set(0);
            } else if (c >= 'a' && c <= 'z') {
                bin.set(1);
            } else if (c >= 'A' && c <= 'Z') {
                bin.set(2);
            } else {
                bin.set(3);
            }
        }
        if (bin.count() < 3) {
            cout << "NG" << endl;
            continue;
        }
        //不能有长度大于2的包含公共元素的子串重复
        bool flag = true;
        for (int i = 0; i < s.length() - 2; ++i) {
            string temp = s.substr(i, 3);
            if (s.find(temp, i + 1) != string::npos) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            cout << "NG" << endl;
            continue;
        }
        cout << "OK" << endl;
    }

}