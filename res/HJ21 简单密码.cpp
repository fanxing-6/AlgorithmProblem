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

map<char, int> m{
        {'1', 1},
        {'a', 2},
        {'b', 2},
        {'c', 2},
        {'d', 3},
        {'e', 3},
        {'f', 3},
        {'g', 4},
        {'h', 4},
        {'i', 4},
        {'j', 5},
        {'k', 5},
        {'l', 5},
        {'m', 6},
        {'n', 6},
        {'o', 6},
        {'p', 7},
        {'q', 7},
        {'r', 7},
        {'s', 7},
        {'t', 8},
        {'u', 8},
        {'v', 8},
        {'w', 9},
        {'x', 9},
        {'y', 9},
        {'z', 9},
        {'0', 0}
};


int main() {

    string value;
    cin >> value;

    for (auto v: value) {
        if (std::isdigit(v))
            cout << v;
        else if (std::islower(v) && !std::isdigit(v))
            cout << m[v];
        else if (std::isupper(v) && !std::isdigit(v)) {
            if (v != 'Z')
                cout << (char)std::tolower(v + 1);
            else
                cout << 'a';
        }
    }
}