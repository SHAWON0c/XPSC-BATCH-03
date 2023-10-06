

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
        int n ;
        cin>>n;
        string s, d ;
        cin>>s;
        cin>>d;
        int b[1]= {0};
        int g[1]= {0};
        bool flag = true ;
        for( int i =0; i<n; i++)
        {

            if((s[i]=='R' and d[i]=='G'  ||s[i]=='R' and d[i]=='B')||s[i]=='G' and d[i]=='R'  ||s[i]=='B' and d[i]=='R'  )
            {
                nn;
                flag=false ;
                break;

            }
        }

        if(flag)yy;
    }

    return 0;
}
