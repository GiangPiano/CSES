#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> cnt;
    cnt[0] = 1;
    int sum = 0, res = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        res += cnt[sum - x];
        cnt[sum]++;
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

