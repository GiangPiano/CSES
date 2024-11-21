#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int fiveMult = 5;
    int res = 0;
    while (fiveMult <= n) {
        res += n / fiveMult;
        fiveMult *= 5;
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
