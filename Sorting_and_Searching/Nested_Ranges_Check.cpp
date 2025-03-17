#include<bits/stdc++.h>
using namespace std;

struct range {
    int l, r, id;

    bool operator <(const range &other) {
        if (l != other.l) return l < other.l;
        return r > other.r;
    }
};

void solve() {
    int n; cin >> n;
    vector<range> a;
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        a.push_back({l, r, i});
    }
    sort(a.begin(), a.end());

    bool contains[n] = {};
    bool contained[n] = {};
    int minEnd = INT_MAX;
    int maxEnd = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i].r >= minEnd) contains[a[i].id] = 1;
        minEnd = min(minEnd, a[i].r);
    }
    for (int i = 0; i < n; i++) {
        if (a[i].r <= maxEnd) contained[a[i].id] = 1;
        maxEnd = max(maxEnd, a[i].r);
    }
    for (auto i: contains) cout << i << ' ';
    cout << '\n';
    for (auto i: contained) cout << i << ' ';
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
