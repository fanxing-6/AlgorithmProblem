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

pair<int, int> compute(const string &instruction) {
    char direction = instruction[0];
    int distance = stoi(instruction.substr(1));

    switch (direction) {
        case 'A':
            return make_pair(-distance, 0);
        case 'D':
            return make_pair(distance, 0);
        case 'W':
            return make_pair(0, distance);
        case 'S':
            return make_pair(0, -distance);
        default:
            return make_pair(0, 0);
    }

}


int main() {
    string input;
    cin >> input;

    regex pattern("^[A|S|W|D]\\d\\d?$");
    smatch matches;

    int x{0}, y{0};

    auto it = input.cbegin();

    while (regex_search(it, input.cend(), matches, pattern)) {

        cout << matches[0] << endl;
        x += compute(matches[0]).first;
        y += compute(matches[0]).second;
        it = matches[0].second;
    }
    cout << x << "," << y << endl;
}