#include<bits/stdc++.h>
using namespace std;

const int amax = 2e5 + 69;
int a[amax];

void solve() {
    int n; cin >> n;
    cin >> a[0];
    long long res = 0;
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i - 1] > a[i]) {
            res += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << res;
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
