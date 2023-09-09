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
    int N;
    vector<int> st{};

    cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        st.emplace_back(temp);
    }


    vector<int> dp1(N, 1);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (st[i] > st[j]) {
                dp1[i] = max(dp1[j] + 1, dp1[i]);
            }
        }
    }
    vector<int> dp2(N, 1);
    for (int i = N - 1; i >= 0; --i) {
        for (int j = N - 1; j > i; --j) {
            if (st[i] > st[j]) {
                dp2[i] = max(dp2[j] + 1, dp2[i]);
            }
        }
    }

    int res = 9999;
    for (int i = 0; i < N; ++i) {
        res = min(N + 1 - dp1[i] - dp2[i], res);
    }

    cout << res;


}