
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve()
{

    string s, d ;
    cin>>s >> d ;

    int freD[26]= {0};


    for( char c : d)
    {
        freD[c-'a']++;

    }


    int freS[26]= {0};
    int i =0, j =0;
    int k = d.size();
    int ans =0;

    while( j<s.size())
    {

        freS[s[j]-'a']++;
        if(j>=k-1)
        {

            bool flag = true;

            for( int c =0 ; c<26; c++)
            {
                if(freS[c]!=freD[c])
                {
                    flag = false ;
                    break ;
                }

            }


            if(flag) ans++;
            freS[s[i]-'a']--;
            i++;

        }
        j++;

    }
    cout<<ans<<endl;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
