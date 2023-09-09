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
#include <limits>
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

int main() {
    multimap<char, int> ma{};
    string str;
    getline(cin, str);

    for (auto c: str) {
        if (isalpha(c)) {
            if (isupper(c)) {
                ma.insert(make_pair(tolower(c), 2));
            } else if (islower(c)) {
                ma.insert(make_pair(c, 1));
            }
        }
    }

    auto it = ma.begin();
    for (int i = 0; i < str.size(); ++i) {
        if (isalpha(str[i])) {
            if (it->second == 1)
                str[i] = it->first;
            else
                str[i] = toupper(it->first);
            it++;
        } else {
            continue;
        }
    }
    cout << str;

}