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
    std::getline(std::cin, value);

    vector<string> words;
    char spilt_char = ' ';
    string word = "";

    for (auto c: value) {
        if (c != spilt_char) {
            word += c;
        } else {
            words.push_back(word);
            word = "";
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }
    for (int i = words.size() - 1; i >= 0; --i) {
        cout << words[i];
        cout << " ";
    }
}