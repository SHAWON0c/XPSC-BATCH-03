#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int Call(string x, string y)
{
    int res = 0;
    int n = x.size();
    for (int i = 0; i < n; i++)
    {
        res += abs(x[i] - y[i]);
    }
    return res;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, Call(s[i], s[j]));
            }
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
