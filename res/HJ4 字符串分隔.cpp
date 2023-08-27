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
    std::getline(std::cin, str);

    int a = str.size() / 8;
    int b = str.size() % 8;

    if (a != 0) {
        for (int i = 0; i < a; ++i) {
            cout << str.substr(i * 8, 8) << endl;
        }
    }

    if (b != 0) {
        cout << str.substr(a * 8, b) + string(8 - b, '0') << endl;
    }

}