#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
     int  t ;
     cin>> t ;
     while(t--){
       string s ;
       cin>> s ;

    string k =  "314159265358979323846264338327";
    ll cnt =0;
     for( int i =0 ; i< s.size() ;i++){
        if( s[i]==k[i]) cnt++;
        else {
            break ;
        }

    }  

     

cout<< cnt <<endl;


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
