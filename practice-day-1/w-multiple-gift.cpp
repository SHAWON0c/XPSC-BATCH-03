
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

           ll x , y ; cin>>x>>y;
           ll cnt = 1 ;
           ll curr= x ;
           while( curr *2<=y){

              curr*=2;
              cnt++;

           }
           cout<<cnt<<endl;


    }
