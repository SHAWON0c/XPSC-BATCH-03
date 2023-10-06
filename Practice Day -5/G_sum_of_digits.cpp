
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    string s ;
    cin>>s;

    if ( s.size()<2)
    {
        cout<<0<<endl;
        return 0;
    }
    ll cnt =0;
    ll x =11;

    while( x>=10)
    {

        x=0;

        for( int i =0; i<s.size(); i++)
        {
            x+=(s[i]-'0');
        }


        s=to_string(x);
        cnt++;


    }

    cout<<cnt<<endl;
    return 0;
}
