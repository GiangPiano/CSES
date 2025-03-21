#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > sum + 1) {
            cout << sum + 1;
            return;
        }
        else sum += a[i];
    }
    cout << sum + 1;
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
