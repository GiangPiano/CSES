#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    multiset<int> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.insert(x);
    }
    a.insert(-1);
    
    for (int i = 0; i < m; i++) {
        int b; cin >> b;
        int ticket = *(--a.upper_bound(b));
        cout << ticket << '\n';
        if (ticket != -1) a.erase(--a.upper_bound(b));
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
