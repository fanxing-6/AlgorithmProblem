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

map<char, int> m;

int main() {
    string str;
    cin >> str;

    for (auto c: str) {
        m[c]++;
    }
    for (auto c: str) {
        if (m[c] == 1) {
            cout << c;
            return 0;
        }
    }
    cout << "-1";
}