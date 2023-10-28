#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int val = a[i];
            if (mp[a[i]] != 0) {
                ans++;
                while (mp[val] > 0) {
                    mp[val]--;
                    val++;
                }
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
