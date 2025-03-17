#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> cnt;
    int left = 0, res = 0;

    for (int right = 0; right < n; right++) {
        cnt[a[right]]++;

        while ((int)cnt.size() > k) {
            cnt[a[left]]--;
            if (cnt[a[left]] == 0) cnt.erase(a[left]);
            left++;
        }

        res += (right - left + 1);
    }

    cout << res << "\n";
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

