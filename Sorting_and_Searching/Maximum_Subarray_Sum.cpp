#include<bits/stdc++.h>
#define int long long
using namespace std;
 
void solve() {
    int n; cin >> n;
    int currSum = INT_MIN;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        currSum = max(a, currSum + a);
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum;
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
