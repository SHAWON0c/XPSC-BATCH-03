#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     ll n;
     cin>> n ;
     ll a[n ];
     ll mn=INT_MAX;
     ll sum=0, bum=0;
     ll cnt =0;
     for (int i=0 ; i< n ;i++ )cin>>a[i];
     for( int i =0;i<n;i++){
        if(a[i]%2==0){
            sum+=a[i];
        }
        else {
            bum+=a[i];
            cnt++;
            mn=min(mn, a[i]);

        }


     }
     if(cnt%2==0){
        cout<<sum+bum<<endl;
     }
     else {
        cout<<(sum+bum)-mn<<endl;
     }


}
