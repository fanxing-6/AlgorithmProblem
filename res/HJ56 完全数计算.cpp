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

bool isPerfectNumber(int a) {
    int res{1};
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            res += i;
            res += (a / i);
        }
    }
    return res == a;
}


int main() {
    int number;
    cin >> number;
    int res{0};
    for (int i = 2; i <= number; ++i) {
        if (isPerfectNumber(i)) res++;
    }
    cout << res;
}