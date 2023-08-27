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
    int count{0};
    cin >> count;

    map<int, int> m;
    int key{0}, value{0};
    for (int i = 0; i < count; ++i) {
        cin >> key >> value;
        m[key] += value;
    }
    for (auto t: m) {
        cout << t.first << " " << t.second << endl;
    }

}