#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


int  solve()
{
     int t ;
     cin>> t ;
     while(t--){
            int n, i;
            cin >> n;
            int a[n+5];
     
            for(i=0; i<n; i++){
                cin >> a[i];
            }
     
            string s;
            cin >> s;
     
            map<int, set<char>> mp;
     
            for(i=0; i<n; i++){
                mp[a[i]].insert(s[i]);
            }
     
            // for(auto it = mp.begin(); it != mp.end(); it++){
            //     cout << it->first << " " << it->second.size() << endl;
            // }
     
            bool flag = true;
     
            for(auto it = mp.begin(); it != mp.end(); it++){
                if(it->second.size() > 1) {
                    flag = false;
                    break;
                }
            }
            if(flag) yy;
            else nn;
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
