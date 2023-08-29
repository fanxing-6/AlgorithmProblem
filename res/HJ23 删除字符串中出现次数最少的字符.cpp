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
    string str;
    cin >> str;
    map<char, int> m;
    for (auto s: str) {
        m[s]++;
    }
    auto min_count = min_element(m.begin(), m.end(),
                                 [](auto a, auto b) {
                                     return a.second < b.second;
                                 })->second;
    for (auto t: str) {
        if (m[t] != min_count) cout << t;
    }
}