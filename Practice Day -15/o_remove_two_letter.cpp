#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
        int t;                  
        cin>>t;
    while(t--){
        int n;              
        cin>>n;
        string s;           
        cin>>s;
 
        string ss="";       
 
        for(int i=2;i<n;i++){
            ss.push_back(s[i]);
        }
 
        int SI=0,SSI=0;
        ll ans=1;
        while(SI<n-2){
            if(s[SI]!=ss[SSI]){
                ans++;
            }
            SI++;
            SSI++;
        }
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
