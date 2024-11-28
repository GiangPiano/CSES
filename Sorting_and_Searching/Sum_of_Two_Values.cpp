#include<bits/stdc++.h>
#define int long long
using namespace std;
 
void solve() {
    int n, x; cin >> n >> x;
    map<int, int> id;
    
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (id[x - a] != 0) {
            cout << i + 1 << ' ' << id[x - a];
            return;
        }
        id[a] = i + 1;
    }
    cout << "IMPOSSIBLE";
}
 
signed main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
}
