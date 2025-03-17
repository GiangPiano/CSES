#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    vector<long long> a(n);
    for (long long &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    // for (long long &i : a) cout << i << ' ';
    // cout << '\n';

    int i = 0, j = n - 1, cnt = 0;
    while (i <= j) {
        if (a[i] + a[j] <= k && i != j) {
            j--;
        }
        cnt++;
        i++;
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
