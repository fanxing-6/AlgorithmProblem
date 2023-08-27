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
    std::set<int> s;

    int count{0};
    cin >> count;
    int number{0};
    for (int i = 0; i < count; ++i) {
        cin >> number;
        s.emplace(number);
    }
    for (auto res: s) {
        cout << res << endl;
    }

}