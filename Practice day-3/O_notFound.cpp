
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int n ;
   cin>>n ;
   int a[n];

   for( int i =0;i<n;i++){
    cin>>a[i];

   }

   int sum =a[0];
   int ans= sum;

   for( int i =1;i<n;i++){
        if((sum+a[i])%2==0){
            sum+=a[i];
        }

   }
   cout<<sum<<endl;
    return 0;
}
