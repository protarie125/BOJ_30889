#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vs = vector<string>;

ll n;
vs ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ans = vs(10, string(20, '.'));

  cin >> n;
  while (0 < (n--)) {
    string x;
    cin >> x;

    auto r = x[0] - 'A';
    auto iss = istringstream{x.substr(1)};
    ll c;
    iss >> c;

    ans[r][c - 1] = 'o';
  }

  for (const auto& s : ans) {
    cout << s << '\n';
  }

  return 0;
}