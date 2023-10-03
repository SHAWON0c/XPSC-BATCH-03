#include<bits/stdc++.h>
using namespace std ;
int main(){

  int a , b , c ;
  cin>>a>>b>>c ;
  int ans;
  bool flag=false ;

  for( int  i =a ; i<=b;i++){

    if(i%c==0){
        flag = true ;
        ans = i;

    }
    else flag=false ;

  }
  if(flag)cout<<ans<<endl;
  else cout<<-1<<endl;





}
