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

int main() {
    string str;
    char s;
    std::getline(std::cin, str);
    cin >> s;
    s = std::tolower(s);
    int res{0};
    for (auto c: str) {
        c = std::tolower(c);
        if (c == s) {
            res++;
        }
    }
    cout << res << endl;
}