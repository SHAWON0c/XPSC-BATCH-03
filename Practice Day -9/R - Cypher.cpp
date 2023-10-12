#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for( int i =0; i<n; i++)cin>>a[i];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;

            for (char c : s)
            {
                if (c == 'D')
                {
                    a[i]++;
                    if (a[i] == 10)
                        a[i] = 0;
                }
                else
                {
                    a[i]--;
                    if (a[i] == -1)
                        a[i] = 9;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i]<<" ";

        }
        cout << endl;
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
