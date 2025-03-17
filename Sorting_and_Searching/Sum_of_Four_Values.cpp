#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, vector<pair<int, int>>> id_of_sum;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            id_of_sum[a[i] + a[j]].push_back({i + 1, j + 1});
        }
    }
    for (auto [sum1, v]: id_of_sum) {
        if (id_of_sum.contains(x - sum1)) {
            for (auto [i, j]: v) {
                for (auto [k, l]: id_of_sum[x - sum1]) {
                    if (i != k && j != l && i != l && j != k) {
                        cout << i << ' ' << j << ' ' << k << ' ' << l;
                        return;
                    }
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
