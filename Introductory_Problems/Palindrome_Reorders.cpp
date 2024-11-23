#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    map<char, int> cnt = {};

    for (char c: s) {
        cnt[c]++;
    }

    bool flag = false;
    for (pair<char, int> p: cnt) {
        if (p.second % 2 != 0 && s.length() % 2 != 0 && flag == false) {
            flag = true;
            s[s.length() / 2] = p.first;
            p.second--;
        } 
        else if (p.second % 2 != 0) {
            cout << "NO SOLUTION";
            return;
        }
    }

    int i = 0;
    for (pair<char, int> p: cnt) {
        while (p.second > 1) {
            s[i] = p.first;
            s[s.length() - i - 1] = p.first;
            p.second -= 2;
            i++;
        }
    }
    cout << s;
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
