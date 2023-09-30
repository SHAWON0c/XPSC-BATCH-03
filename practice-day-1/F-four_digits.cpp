
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      int n ;
      cin>>n ;
      int x = n ;
      int cnt =0;

      while( x!=0){

         x = x/10;
         cnt++;



      }
      if( n==0)cout<<"0000"<<endl;

      else if(cnt==4)cout<<n<<endl;
      else
      {for( int i = 0 ;i<4-cnt;i++)cout<<0;cout<<n;
      }
}
