
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;


        ll sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}
