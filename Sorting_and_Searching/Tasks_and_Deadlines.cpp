#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());

    int finish_time = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        finish_time += a[i].first;
        res += a[i].second - finish_time;
    }
    cout << res;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


/*
3
6 10
8 15
5 12

10 - 6
12 - (5 + 6)
15 - (5 + 6 + 8)
b[i] - prefixA[i];
 */
