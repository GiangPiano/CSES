#include<bits/stdc++.h>
using namespace std;

struct interval {
    int left;
    int right;
};

void solve() {
    int n; cin >> n;
    vector<interval> customer(n);
    map<int, int> compress;
    for (int i = 0; i < n; i++) {
        cin >> customer[i].left >> customer[i].right;
        compress[customer[i].left] = customer[i].left;
        compress[customer[i].right] = customer[i].right;
    }

    int i = 0;
    for (auto &p: compress) p.second = i++;
    vector<int> cnt(i + 1, 0);

    for (int i = 0; i < n; i++) {
        customer[i].left = compress[customer[i].left];
        customer[i].right = compress[customer[i].right];
        // cout << customer[i].left << ' ' << customer[i].right << '\n';
        cnt[customer[i].left]++;
        cnt[customer[i].right]--;
    }

    int cur = 0, res = 1;
    for (int i = 0; i < cnt.size(); i++) {
        cur += cnt[i];
        res = max(res, cur);
    }
    cout << res;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    // freopen("a.INP", "r", stdin);
    while (t--) {
        solve();
    }

    return 0;
}
