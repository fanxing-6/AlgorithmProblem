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

int compute(string &s, int left, int right) {
    vector<int> st;

    int len = s.size(), res = 0;
    char op = '+';
    for (int i = left; i <= right; ++i) {
        if (isdigit(s[i])) res = res * 10 + (s[i] - '0');
        if (s[i] == '(') {
            int lv = 0;
            int j = i;
            for (; j <= right; j++) {
                if (s[j] == '(')
                    lv += 1;
                else if (s[j] == ')')
                    if (--lv == 0) break;
            }

            res = compute(s, i + 1, j - 1);
            i = j + 1;
        }
        if (!isdigit(s[i]) || i == right) {
            if (op == '+') {
                st.emplace_back(res);
            } else if (op == '-') {
                st.emplace_back(-res);
            } else if (op == '*') {
                st.back() *= res;
            } else if (op == '/') {
                st.back() /= res;
            }
            op = s[i];
            res = 0;
        }
    }
    return accumulate(st.begin(), st.end(), 0);
}


int main() {
    string str;
    cin >> str;

    cout << compute(str, 0, str.size() - 1) << "\n";
    return 0;
}