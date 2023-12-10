#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;
        ll a[n], b[m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a, a + n, greater<int>());
        sort(b, b + m, greater<int>());

        //vector<int> v;

        // for (int i = 0; i < m; i++) {
        //     v.push_back(b[i] * h);
        // }

        ll sum = 0;

        for (int i = 0; i < min (n , m ); i++) {
             sum +=  min(1ll*(b[i]*h), (1ll*a[i]));
        }

        cout << sum << endl;
    }
}

int main() {
    solve();
}
