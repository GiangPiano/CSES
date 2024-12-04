#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n + 1);
    vector<int> id(n + 1);
    id[0] = 0;
    id[n + 1] = n + 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        id[a[i]] = i;
    }
    int cnt = 1;
    for (int i = 0; i <= n; i++) {
        cnt += id[i + 1] < id[i];
    }
    while (m--) {
        int x, y; cin >> x >> y;
        set<int> s;
        s.insert(a[x]);
        s.insert(a[x] - 1);
        s.insert(a[x] + 1);
        s.insert(a[y]);
        s.insert(a[y] - 1);
        s.insert(a[y] + 1);

        for (int i: s) {
            cnt -= id[i + 1] < id[i];
        }
        
        swap(id[a[x]], id[a[y]]);
        swap(a[x], a[y]);
        
        for (int i: s) {
            cnt += id[i + 1] < id[i];
        }
   
        cout << cnt << '\n';
    }
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
