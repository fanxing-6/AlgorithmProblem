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
    string value;
    cin >> value;
    set<char> s;

    for (auto c: value) {
        if (c >= 0 && c <= 127) {
            s.insert(c);
        }
    }
    cout << s.size() << endl;
}