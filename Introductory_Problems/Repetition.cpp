#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    int ans = 1, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 1;
        }
    }
    cout << ans << "\n";
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
