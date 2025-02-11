#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


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
    ordered_set<pair<int, int>> smallerR;
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        a.push_back({l, r, i});
    }
    sort(a.begin(), a.end());

    vector<int> contains(n);
    for (int i = n - 1; i >= 0; i--) {
        smallerR.insert({a[i].r, n - i - 1});
        contains[a[i].id] = smallerR.order_of_key({a[i].r, n - i - 1});
        // cout << smallerR.order_of_key({a[i].r, n - i - 1}) << '\n';
    }
    for (auto i: contains) cout << i << ' ';
    cout << '\n';
    smallerR.clear();
    
    vector<int> contained(n);
    for (int i = 0; i < n; i++) {
        smallerR.insert({a[i].r, -i});
        contained[a[i].id] = smallerR.size() - 1 - smallerR.order_of_key({a[i].r, -i});
    }
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
