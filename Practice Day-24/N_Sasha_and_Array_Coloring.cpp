#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve (){
    int t ; 
    cin >> t ; 
    while( t--){
        int n ; 
        cin >> n ; 
        int a[n];
        for( int i = 0 ; i < n ; i++)cin >> a [ i];

        sort(a , a+n);

        int i = 0 , j = n - 1;
        ll sum = 0 ; 


        while( i< j){
            sum+= a[j]-a[i];
            i++;
            j--;
        }

        cout<<sum<<endl;
    }

    
}


int main(){
solve();
}