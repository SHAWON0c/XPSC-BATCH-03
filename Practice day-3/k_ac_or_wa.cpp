#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, t;
    cin >> a >> b >> t;
    int cnt = 0;

    for (int i = a; i <= t; i += a) {
        cnt += b;
    }

    cout << cnt << endl;

    return 0;
}
