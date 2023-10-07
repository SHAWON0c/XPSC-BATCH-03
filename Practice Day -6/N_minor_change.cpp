
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

    string s, t ;
    cin>> s;
    cin>> t ;

    ll cnt =0;
    for( int i =0; i<s.size(); i++)
    {

        if(s[i]!=t[i])
        {
            cnt++;
        }

    }

    cout<<cnt<<endl;

    return 0;
}
