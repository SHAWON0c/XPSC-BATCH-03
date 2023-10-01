#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n ;
  cin>>n ;
  int a[n];
  for( int i =0;i<n;i++)cin>>a[i];
  int k ;
  cin>>k;

  int s=0;
  int mx = INT_MIN;
  int i =0 , j = 0 ;
   while( j<n){
    s+=a[j];

    if(j>=k-1){

        //cout<<s<<endl;
         mx= max (mx , s );
        s-=a[i];
        i++;


    }



    j++;
   }
   cout<<mx<<endl;



 return 0;
}
