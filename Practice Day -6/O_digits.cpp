
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


int main()
{
    ll N, K;
    cin >> N >> K;

    ll cnt= 0;

    while (N > 0)
    {
        N /= K;
       // cout<<N<<endl;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}

