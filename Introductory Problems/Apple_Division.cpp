#include<bits/stdc++.h>
using namespace std;

long long sum1 = 0;
long long sum2 = 0;
long long res = LLONG_MAX;
vector<long long> a(25);

void Try(int n) {
    if (n < 0) {
        res = min(res, abs(sum1 - 2 * sum2));
        return;
    }
    sum2 += a[n];
    Try(n - 1);
    sum2 -= a[n];
    Try(n - 1);
}

void solve() {
    long long n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum1 += a[i];
    }
    Try(n - 1);
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
