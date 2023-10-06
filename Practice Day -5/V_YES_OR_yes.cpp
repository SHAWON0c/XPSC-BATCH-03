//transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

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

    int t ;
    cin>>t ;
    while(t--)
    {
        string s ;
        cin>>s ;

        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s[0]=='Y' and s[1]=='E' and s[2]=='S') yy;
        else nn;



    }

    return 0;
}
