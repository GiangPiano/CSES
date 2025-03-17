#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0, right = 0;
    int sum = 0, res = 0;
    while (left < n && right <= n) {
        /*cout << left << ' ' << right << ' ' << sum << '\n'; */
        if (sum < x) {
            sum += a[right];
            right++;
        }
        else if (sum > x) {
            sum -= a[left];
            left++;
        }
        else {
            res++;
            sum -= a[left];
            sum += a[right];
            right++;
            left++;
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
