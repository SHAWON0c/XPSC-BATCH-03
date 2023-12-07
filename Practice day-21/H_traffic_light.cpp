#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve (){

    int t ; cin>> t ;
    while(t--){
        int n ; char c ; 
        cin>> n >> c ;
        string s ; cin>> s ;
        s+=s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        int cnt = 0 ; 
        int mx =INT_MIN;
        bool f = true ;


    for( int i = 0 ; i< s.size(); i++){
        if( s[i]=='g'){
            mx =max( mx , cnt );
            f=false ;

        }
        if( s[i]==c and f==false ){
            cnt=0 ;
            f= true ; 

        }

        if(f)cnt++;
    }

    cout<<mx<<endl;
    }
}


int main(){
solve();
}