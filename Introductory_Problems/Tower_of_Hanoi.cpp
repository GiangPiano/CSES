#include<bits/stdc++.h>
using namespace std;


void move(int size, int start, int dest, int tmp) {
    if (size == 0) return;
    move(size - 1, start, tmp, dest);
    cout << start << " " << dest << '\n';
    move(size - 1, tmp, dest, start);
}

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += cnt + 1;
    }
    cout << cnt << '\n';
    move(n, 1, 3, 2);
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
