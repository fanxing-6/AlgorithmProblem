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
    int year, month, day;
    cin >> year >> month >> day;

    struct tm timeInfo = {0};

    timeInfo.tm_year = year - 1900;
    timeInfo.tm_mon = month - 1;
    timeInfo.tm_mday = day;

    mktime(&timeInfo);

    std::cout << timeInfo.tm_yday + 1 << endl;
    return 0;
}