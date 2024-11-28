#include<bits/stdc++.h>
#define int long long
using namespace std;
 
struct movie {
    int start;
    int end;
    
    bool operator< (const movie &other) {
        if (end == other.end) return start < other.start;
        return end < other.end;
    }
};
 
void solve() {
    int n; cin >> n;
    vector<movie> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].start >> a[i].end;
    }
    sort(a.begin(), a.end());
    int currEnd = a[0].end;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (a[i].start >= currEnd) {
            currEnd = a[i].end;
            cnt++;
        }
    }
    cout << cnt;
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
