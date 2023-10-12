#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl



void solve()
{
    int t ;
    cin>> t;
    while(t--)
    {
        ll cnt=0;
        int a[4];
        for(int i =0; i<4; i++)cin>>a[i];
        for( int i =1 ; i<4; i++)
        {
            if(a[i]>a[0])cnt++;
        }


        cout<<cnt<<endl;

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
