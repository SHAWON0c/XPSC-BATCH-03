#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<char, long long int> f_occ;
        map<char, long long int> s_occ;
        map<string, long long int> occ;
        vector<string> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            f_occ[a[i][0]]++;
            s_occ[a[i][1]]++;
            occ[a[i]]++;
        }

        long long int ans = 0;

        for (int i = 0; i < n; i++) {
            long long int x = max((long long int)0, f_occ[a[i][0]] - occ[a[i]]);
            ans += x;
            x = max((long long int)0, s_occ[a[i][1]] - occ[a[i]]);
            ans += x;
            if (f_occ[a[i][0]] > 0) f_occ[a[i][0]]--;
            if (s_occ[a[i][1]] > 0) s_occ[a[i][1]]--;
            if (occ[a[i]] > 0) occ[a[i]]--;
        }

        cout << ans << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
