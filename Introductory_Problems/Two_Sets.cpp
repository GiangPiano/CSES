#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum % 2) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<long long> a, b;
    sum /= 2;
    while (n) {
        if (sum - n >= 0) {
            a.push_back(n);
            sum -= n;
        } else {
            b.push_back(n);
        }
        n--;
    }
    cout << a.size() << '\n';
    for (long long i : a) cout << i << ' ';
    cout << '\n';
    cout << b.size() << '\n';
    for (long long i : b) cout << i << ' ';
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
