#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1;
        return;
    }
    if (n <= 3) {
        cout << "NO SOLUTION";
        return;
    }
    for (int i = 1; 2 * i <= n; i++) {
        cout << 2 * i << ' ';
    }
    for (int i = 1; 2 * i - 1 <= n; i++) {
        cout << 2 * i - 1 << ' ';
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
