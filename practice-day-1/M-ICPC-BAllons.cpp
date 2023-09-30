
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     int t ;
     cin>>t ;
     while(t--){

        int n ;
        cin>>n ;
        string s;
        cin>>s ;

        sort( s.begin(), s.end());
       int ans = n+1;
       for( int i =0;i<n-1;i++){
        if(s[i]!=s[i+1])ans++;
       }




        cout<<ans<<endl;
     }


}
