#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
     int t ; 
     cin>> t ;
     while( t--){

      string s = "Timur";
      sort( s. begin(), s.end());
      int n ;
      cin>> n ;
      string k ; 
      cin>>k ;

      sort( k .begin(), k . end());




      bool flag = true ;

      for( int i =0;i<s.size();i++){
        if(s[i]!=k[i]){


     flag = false ;
     break ;
        }
      }

      if( k.size()>s.size())nn;
      else if(flag)yy;
      else nn;


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
