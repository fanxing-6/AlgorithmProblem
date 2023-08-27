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
    multiset<string> s;
    for (int i = 0; i < count; ++i) {
        string temp;
        cin >> temp;
        s.insert(temp);
    }


    for (auto str: s) {
        cout << str << endl;
    }
}