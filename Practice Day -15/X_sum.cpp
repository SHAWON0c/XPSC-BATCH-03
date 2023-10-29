#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll Call(int x, int y, int n, int m, const vector<vector<int>>& a) {
    ll res = 0;
    int indx = 0;
    while (x - indx >= 0 && y - indx >= 0) {
        res += a[x - indx][y - indx];
        indx++;
    }
    indx = 0;
    while (x - indx >= 0 && y + indx < m) {
        res += a[x - indx][y + indx];
        indx++;
    }
    indx = 0;
    while (x + indx < n && y + indx < m) {
        res += a[x + indx][y + indx];
        indx++;
    }
    indx = 0;
    while (x + indx < n && y - indx >= 0) {
        res += a[x + indx][y - indx];
        indx++;
    }

    return res - 3 * a[x][y];
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, Call(i, j, n, m, a));
            }
        }
        cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
