#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    // vector<int> a(n);
    map<int, int> id;

    int j = -1;
    // int x; cin >> x;
    int res = 1;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (id[x] >= j) {
            j = id[x];
        }
        res = max(res, i - j + 1);
        id[x] = i + 1;
        // cout << j << ' ' << i << ' ' << res << '\n';
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
