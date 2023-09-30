
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

         ll n ;
         cin>>n ;
         int x= n-1;
        int a[x];
        for( int i =0;i<x;i++)cin>>a[i];
        vector<int>watch(n,0);
        for( int i =0;i<x;i++){
            watch[a[i]-1]=1;


        }

        for(  int i =0;i<n;i++){

            if(watch[i]==0)cout<<i+1<<endl;
        }


    }
