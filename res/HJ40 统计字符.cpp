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


int main() {
    string str;
    getline(cin, str);
    int a{0}, b{0}, c{0}, d{0};
    for (auto s: str) {
        if (std::isalpha(s)) {
            a++;
        } else if (std::isspace(s)) {
            b++;
        } else if (std::isdigit(s)) {
            c++;
        } else {
            d++;
        }
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;

}