#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>> grid(8, vector<bool>(8));
vector<bool> col(8);
vector<bool> diag1(15);
vector<bool> diag2(15);
int cnt = 0;
int lim = 0;

void Try(int n) {
    if (n == 8) {
        cnt++;
        return;
    }
    for (int i = 0; i < 8; i++) {
        if (grid[n][i] == 0 && col[i] == 0 && diag1[n + i] == 0 && diag2[n - i + 7] == 0) {
            col[i] = 1;
            diag1[n + i] = 1;
            diag2[n - i + 7] = 1;
            Try(n + 1);
            col[i] = 0;
            diag1[n + i] = 0;
            diag2[n - i + 7] = 0;
        }
    }
}

void solve() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char c; cin >> c;
            grid[i][j] = (c == '*');
        }
    }
    Try(0);
    cout << cnt;
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
