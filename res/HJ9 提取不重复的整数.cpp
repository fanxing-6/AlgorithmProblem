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

    unordered_set<char> seen;

    for (auto c: value) {
        seen.insert(c);
    }

    for (int i = value.size() - 1; i >= 0; --i) {
        if (seen.count(value[i])) {
            seen.erase(value[i]);
            cout << value[i];
        } else {
            continue;
        }
    }
    cout << endl;

}