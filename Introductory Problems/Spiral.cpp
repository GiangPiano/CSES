#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;
    long long layer = max(x, y);
    long long res = (layer - 1)*(layer - 1);
    if (layer % 2 != 0) {
        if (x >= y) {
            res += y;
        }
        else res += 2*y - x;
    }
    else {
        if (y >= x) {
            res += x;
        }
        else res += 2*x - y;
    }
    cout << res << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
