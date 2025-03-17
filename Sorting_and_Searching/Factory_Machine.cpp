#include <bits/stdc++.h>
#include <climits>
#include <ios>
#define int unsigned long long
using namespace std;


int getProductCount(vector<int> &a, int time) {
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        res += time / a[i];
        if (res >= 1e18) return LLONG_MAX;
    }
    return res;
}

void solve() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int low = 1, high = LLONG_MAX;
    int ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        int product_count = getProductCount(a, mid);
        if (product_count >= t) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    /*freopen("a.INP", "r", stdin);*/

    int t = 1;
    while (t--) {
        solve();
    }
}
