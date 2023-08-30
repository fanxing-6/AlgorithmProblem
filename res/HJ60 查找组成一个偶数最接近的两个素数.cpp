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

bool isPrime(int a) {
    if (a < 2) return false;
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int i, j;

int main() {
    int number;
    cin >> number;
    for (i = number / 2, j = number / 2; i >= 2 && j <= number; --i, j++) {
        if (i + j == number && isPrime(i) && isPrime(j)) {
            cout << i << endl << j;
            return 0;
        }
    }
    return 0;
}