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

int vec[] = {2, 3, 2, 4};

int main() {
    int v;
    cin >> v;
    v -= 1;
    if (v <= 1) cout << -1;
    else {
        cout << vec[((v - 2) % 4) ];
    }
}