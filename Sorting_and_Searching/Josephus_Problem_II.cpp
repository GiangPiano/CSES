#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, k; cin >> n >> k;
    ordered_set<int> s;
    for (int i = 1; i <= n; i++) s.insert(i);

    int id = 0;
    while (!s.empty()) {
        id += k;
        if (id >= s.size()) id %= s.size();
        cout << *s.find_by_order(id) << ' ';
        s.erase(s.find_by_order(id));
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
