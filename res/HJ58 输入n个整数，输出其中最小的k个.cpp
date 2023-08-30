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

vector<int> vec;

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        vec.emplace_back(temp);
    }
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < k; ++i) {
        cout << vec[i] << " ";
    }
}