
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

    ll n, x ;
    cin>>n>>x ;

    vector<ll> v;


    for(int i =0; i<n; i++)
    {
        ll y ;
        cin>>y;
        if(y!=x)
        {
            v.push_back(y);
        }
    }
    if(v.size()==0)cout<<" "<<endl;
    else
    {
        for( auto k : v)
        {
            cout <<k<<" ";
        }
        cout<<endl;
    }







    return 0;
}

