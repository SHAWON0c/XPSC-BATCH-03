#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve (){
    int n ; 
    cin >> n ; 
    int a[n];
    for( int i =0;i<n;i++)cin>>a[i];
    int k ; cin>> k ; 


    int i = 0 , j = 0 , sum =0;
    int mx=INT_MIN ;

    while(j<n){
        sum+=a[j];

        if(j>=k-1){

            mx=max(mx , sum );
            sum-=a[i];
            i++;
        }


        j++;

        
    }

    cout<<mx<<endl;

    
}


int main(){
solve();
}