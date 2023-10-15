#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
     int t ;
     cin>> t ;

     while(t--){
      int n ;
      cin>> n ; 
       
       string s2 ;
       cin>>  s2 ;

      string target="meow";
       transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 

      string ans="";
      for( int i =0;i<n ;i++){
        if( ans.empty() or ans.back() != s2[i] ){
            ans.push_back(s2[i]);
        }
      }

      if( ans==target)yy;
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
