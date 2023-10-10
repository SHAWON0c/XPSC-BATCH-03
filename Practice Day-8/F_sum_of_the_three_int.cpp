#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl
int main()
{
    int k, s ;
    cin>>k>>s ;
    ll cnt =0;
    for( int i =0; i<=k; i++)
    {


        for( int j =0; j<=k; j++)
        {
            int x = s-(i+j);
            if( x >=0 and x<=k)
            {
                cnt++;
            }


        }
    }


    cout<<cnt<<endl;
    return 0;
}

