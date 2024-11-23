#include<bits/stdc++.h>
using namespace std;

vector<long long> prevDigit(19, 0);
vector<long long> nums(19, 0);

void init() {
    long long tenPower = 1;
    for (long long i = 1; i <= 18; i++) {
        tenPower *= 10;
        nums[i] = tenPower - 1;
        prevDigit[i] = prevDigit[i - 1] + (nums[i] - nums[i - 1]) * i;
    }
}

void solve() {
    long long n; cin >> n;
    long long digitCount = lower_bound(prevDigit.begin(), prevDigit.end(), n) - prevDigit.begin();
    long long prev = prevDigit[digitCount - 1];

    if (digitCount == 1) {
        cout << n;
        return;
    }
    long long number = nums[digitCount - 1] + 1 + ((n - prev - 1)/digitCount);
    string numString = to_string(number);
    long long id = (n - prev - 1 + digitCount) % digitCount;

    cout << numString[id];
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    init();
    while (t--) {
        solve();
        cout << '\n';
    }

    return 0;
}
