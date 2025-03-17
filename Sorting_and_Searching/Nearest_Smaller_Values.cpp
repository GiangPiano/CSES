#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<int> st;
    vector<int> res(n);
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[i] < a[st.top()]) {
            res[st.top()] = i + 1;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        res[st.top()] = 0;
        st.pop();
    }
    for (auto i: res) cout << i << ' ';
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
