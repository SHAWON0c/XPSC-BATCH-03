#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, flag = 0;
        cin >> n;
        int a[n + 5];

        for (i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        for (i = 0; i < n - 1; i++) {
            if ((a[i] % 2 == 0 && a[i + 1] % 2 != 0) || (a[i] % 2 != 0 && a[i + 1] % 2 == 0)) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            yy;
        } else {
            if (a[0] % 2 != 0) {
                yy;
            } else {
                nn;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
