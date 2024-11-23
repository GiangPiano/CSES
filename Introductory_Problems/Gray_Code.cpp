#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<string> res;
    res.push_back("0");
    res.push_back("1");
    for (int i = 2; i <= n; i++) {
        vector<string> rev = res;
        reverse(rev.begin(), rev.end());
        for (string &s: res) {
            s += "0";
        }
        for (string &s: rev) {
            s += "1";
            res.push_back(s);
        }
    }
    for (string s: res) cout << s << '\n';
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
