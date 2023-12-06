#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve (){
    int t ; 
    cin >> t ;
    while(t--){
        set<char> s; 
        string in ; 
        cin >> in ; 
        int ans = 1;

        for (int i = 0 ; i < in.size(); i++){
            s.insert(in[i]);
            if (s.size()== 3){
                ans++;
                s.clear();
                //s.insert(in[i]);
            }
        }
        cout << ans << endl;
    }
}

int main(){
    solve();
    return 0;
}
