#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    sort(a.begin(), a.end());

    vector<int> b(m);
    for (int &i: b) cin >> i;
    sort(b.begin(), b.end());

    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m) {
        if (a[i] + k >= b[j] && a[i] - k <= b[j]) {
            i++;
            j++;
            cnt++;
        }
        else if (a[i] - k > b[j]) {
            j++;
        }
        else i++;
        // cout << i << ' ' << j << '\n';
    }
    cout << cnt;
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
