#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> id;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        id[x] = i;
    }
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        cnt += id[i + 1] < id[i];
    }
    cout << cnt;
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
