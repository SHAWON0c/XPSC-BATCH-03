#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s ;
    cin>>s ;
    string ans ;
    for( int i =0;i<s.size();i+=2){
        ans+=s[i];
    }
    cout<<ans<<endl;

    return 0;
}

