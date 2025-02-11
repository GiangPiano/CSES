#include <algorithm>
#include <bits/stdc++.h>
#include <ios>

using namespace std;

struct Guest {
    int first;
    int second;
    int id;
};

bool cmp(Guest &a, Guest &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void solve() {
    set<pair<int, int>> v; 
    int n; cin >> n;
    int room = 0;
    vector<int> res(n);
    vector<Guest> vp;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        vp.push_back({a, b, i});
    }
    sort(vp.begin(), vp.end(), cmp);
    int i = 0;
    for (auto [a, b, i]: vp) {
        auto it = v.lower_bound({a, 0}); 

        if (v.empty() || it == v.begin()) { 
            v.insert({b, ++room});
            res[i] = room;
        } else { 
            --it; 
            int room_no = it->second;
            v.erase(it); 
            v.insert({b, room_no}); 
            res[i] = room_no;
        }
    }
    cout << v.size() << '\n';
    for (auto x: res) 
    cout << x << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

