#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x, n; cin >> x >> n;
    set<int> s;
    s.insert(0);
    s.insert(x);
    multiset<int> gap;
    gap.insert(x);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        // cout << *upper << ' ' << *lower << ' ';
        s.insert(a);
        auto it = s.find(a);
        int upper = *next(it);
        int lower = *prev(it);
        
        // cout << *lower << ' ' << *upper << '\n';
        // for (auto i: gap) cout  << i << ' '; cout << '\n';
        gap.erase(gap.find(upper - lower));
        gap.insert(a - lower);
        gap.insert(upper - a);
        cout << *(--gap.end()) << ' ';
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
