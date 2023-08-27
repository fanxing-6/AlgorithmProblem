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
    int number;
    cin >> number;
    int a = 2;
    while (a <= sqrt(number)) {
        if (number % a == 0) {
            number /= a;
            cout << a << " ";
        } else {
            a++;
        }
    }
    cout << number << endl;
}