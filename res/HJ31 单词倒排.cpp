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

std::vector<string> v;

int main() {

    string str;
    getline(std::cin, str);
    string temp = "";
    for (auto c: str) {
        if (std::isalpha(c)) {
            temp += c;
        } else {
            v.push_back(temp);
            temp = "";
        }
    }
    if (!empty(temp)) {
        v.push_back(temp);
    }
    std::reverse(v.begin(), v.end());
    for (auto c: v) {
        cout << c << " ";
    }
}