

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
        int a[n];
        for(int i =0; i<n; i++)cin>>a[i];

        sort(a,a+n);
        ll s=0;
        for( int i =0; i<n; i++)
        {
            s+=a[i]-a[0];
        }
        cout<<s<<endl;

    }

    return 0;
}
