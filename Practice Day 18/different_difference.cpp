#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
     int t ;
     cin>> t ;
     while(t--){
         int n, k, i;
        cin >> k >> n;
  
        int curr = 1;
        int diff = 1;
 
        for(i=1; i<=k; i++){
            cout << curr << " ";
 
            if(n-(curr+diff) >= (k-(i+1))){
                curr += diff;
                diff++;
            }
            else{
                curr++;
            }
        }
        cout << endl;
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
