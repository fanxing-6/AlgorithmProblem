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
    int index = value.find('.');
    if (index == string::npos) {
        cout << value << endl;
    } else {
        if (value[index + 1] >= '5') {
            cout << stoi(value.substr(0, index)) + 1 << endl;
        } else {
            cout << stoi(value.substr(0, index)) << endl;
        }
    }
}