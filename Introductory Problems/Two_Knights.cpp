#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    for (long long i = 1; i <= n; i++) {
        cout << (i*i*(i*i - 1)/2) - (i - 2)*(i - 1)*4 << '\n';
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
