#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n - 1; i++) {
        int x; cin >> x;
        a[x - 1] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cout << i + 1 << "\n";
            return;
        }
    }
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
