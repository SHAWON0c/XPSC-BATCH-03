#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl



int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int op= 0;

        for (int i = 0; i < n; i++) {
            op= max(op, a[i] - i - 1);
        }

        cout << op<< endl;
    }

    return 0;
}
