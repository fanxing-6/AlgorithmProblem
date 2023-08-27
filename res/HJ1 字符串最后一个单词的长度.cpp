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


int main() {
    std::string s;
    std::getline(std::cin, s);
    // split by space
    auto pos = s.rfind(' ');
    if (pos != std::string::npos) {
        std::cout << s.size() - pos - 1 << std::endl;
        return 0;
    }
    std::cout << s.size() << std::endl;
}
