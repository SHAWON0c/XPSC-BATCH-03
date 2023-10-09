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


    string s= {"Timur"};
    sort( s.begin(), s.end());
    int t ;
    cin>>t ;
    while(t --)
    {
        int n ;
        cin>>n;

        string ans ;
        cin>>ans ;



        if( s.size()!=n)nn;
        else
        {

            sort( ans . begin (), ans. end());
            bool flag = false ;

            for( int i =0; i<n; i++)
            {
                if(s[i]!=ans[i])
                {
                    flag = true ;
                }
            }

            if( flag )nn;
            else yy;


        }





    }
    return 0;
}
