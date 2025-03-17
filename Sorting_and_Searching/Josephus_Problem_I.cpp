#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        q.push(q.front());
        q.pop();
        cout << q.front() << " ";
        q.pop();
    }
    cout << q.front() << endl;
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
