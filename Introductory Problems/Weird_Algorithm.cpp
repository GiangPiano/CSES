#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << 1;
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
