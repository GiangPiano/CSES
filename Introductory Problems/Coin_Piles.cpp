#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3 != 0) {
        cout << "NO";
        return;
    }
    if (a > 2 * b || b > 2 * a) {
        cout << "NO";
        return;
    }
    cout << "YES";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }

    return 0;
}
