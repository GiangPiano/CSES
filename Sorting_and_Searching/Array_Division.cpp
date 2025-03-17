#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int maxNum = *max_element(a.begin(), a.end());

    int low = maxNum;
    int high = sum;
    int res = sum;
    while (low <= high) {
        int mid = (low + high) >> 1;
        int cntGroup = 1;
        int currSum = 0;
        for (int i = 0; i < n; i++) {
            if (currSum + a[i] > mid) {
                currSum = 0;
                cntGroup++;
            }
            currSum += a[i];
        }
        /*cout << mid << " " << cntGroup << '\n';*/
        if (cntGroup <= x) {
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << res;
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

    return 0;
}
