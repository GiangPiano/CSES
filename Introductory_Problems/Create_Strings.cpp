#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    int cnt = 1;
    string res = s + '\n';
    while (next_permutation(s.begin(), s.end())) {
        cnt++;
        res += s + "\n";
    }
    cout << cnt << '\n';
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
