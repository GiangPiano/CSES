#include<bits/stdc++.h>
using namespace std;

bool grid[9][9] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1}
};
string s;
int cnt = 0;

void Try(int step, int x, int y) {
    // for (int i = 0; i < 9; i++) {
    //     for (int j = 0; j < 9; j++) {
    //         cout << grid[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    
    if (step == 48) {
        if (x == 7 && y == 1) {
            cnt++;
            return;
        }
        return;
    }

    if (grid[x - 1][y] == 1 && grid[x + 1][y] == 1 && grid[x][y - 1] == 0 && grid[x][y + 1] == 0) return;
    if (grid[x - 1][y] == 0 && grid[x + 1][y] == 0 && grid[x][y - 1] == 1 && grid[x][y + 1] == 1) return;
    if (grid[x - 1][y - 1] == 1 && grid[x - 1][y] == 0 && grid[x][y - 1] == 0) return;
    if (grid[x - 1][y + 1] == 1 && grid[x - 1][y] == 0 && grid[x][y + 1] == 0) return;
    if (grid[x + 1][y - 1] == 1 && grid[x + 1][y] == 0 && grid[x][y - 1] == 0) return;
    if (grid[x + 1][y + 1] == 1 && grid[x + 1][y] == 0 && grid[x][y + 1] == 0) return;


    if (s[step] == '?') {
        if (grid[x - 1][y] == 0) {
            grid[x - 1][y] = 1;
            Try(step + 1, x - 1, y);
            grid[x - 1][y] = 0;
        }
        if (grid[x + 1][y] == 0) {
            grid[x + 1][y] = 1;
            Try(step + 1, x + 1, y);
            grid[x + 1][y] = 0;
        }
        if (grid[x][y - 1] == 0) {
            grid[x][y - 1] = 1;
            Try(step + 1, x, y - 1);
            grid[x][y - 1] = 0;
        }
        if (grid[x][y + 1] == 0) {
            grid[x][y + 1] = 1;
            Try(step + 1, x, y + 1);
            grid[x][y + 1] = 0;
        }
    }
    else {
        if (s[step] == 'U' && grid[x - 1][y] == 0) {
            grid[x - 1][y] = 1;
            Try(step + 1, x - 1, y);
            grid[x - 1][y] = 0;
        }
        else if (s[step] == 'D' && grid[x + 1][y] == 0) {
            grid[x + 1][y] = 1;
            Try(step + 1, x + 1, y);
            grid[x + 1][y] = 0;
        } 
        else if (s[step] == 'L' && grid[x][y - 1] == 0) {
            grid[x][y - 1] = 1;
            Try(step + 1, x, y - 1);
            grid[x][y - 1] = 0;
        }
        else if (s[step] == 'R' && grid[x][y + 1] == 0) {
            grid[x][y + 1] = 1;
            Try(step + 1, x, y + 1);
            grid[x][y + 1] = 0;
        }
        else return;
    }
}

void solve() {
    cin >> s;
    Try(0, 1, 1);
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
