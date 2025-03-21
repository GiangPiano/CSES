#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        int target = x - a[i];
        for (int j = i + 1; j < n; j++) {
            if (mp.contains(target - a[j])) {
                if (i != j && j != mp[target - a[j]] && i != mp[target - a[j]]) {
                    cout << i + 1 << ' ' << mp[target - a[j]] + 1 << ' ' << j + 1;
                    return;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
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
