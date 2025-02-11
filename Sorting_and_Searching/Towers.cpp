#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    // vector<int> a(n);
    multiset<int> s;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        auto it = s.upper_bound(x);
        if (it != s.end()) {
            s.erase(it);
        }
        s.insert(x);
    }
    cout << s.size();
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
