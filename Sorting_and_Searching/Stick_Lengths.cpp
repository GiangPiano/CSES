#include<bits/stdc++.h>
#define int long long
using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<int> a(n);
 
    int num = 0, sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int median = a[n/2];
    for (int i = 0; i < n; i++) sum += abs(a[i] - median);
    cout << sum;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
}
