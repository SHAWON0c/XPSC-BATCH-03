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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int>mp;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }

        bool flag = false;

        for (auto x : mp)
        {
            if (x.second >= 3)
            {
                cout << x.first << endl;
                flag = true;
                break;
            }
        }

        if (!flag) cout << -1 << endl;
    }

    return 0;
}
