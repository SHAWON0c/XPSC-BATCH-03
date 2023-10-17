#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl
void solve()
{
   string str = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;

        if(str.find(s) != -1) yy;
        else nn;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
