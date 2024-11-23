#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
void solve() {
    int n; cin >> n;
    long long res = 1;
    while (n--) {
        res = res * 2 % MOD;
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
