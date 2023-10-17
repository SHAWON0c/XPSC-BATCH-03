#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int solve() {
    long long l, r, x;
    cin >> l >> r >> x;
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        return 0;
    }
    if (abs(a - b) >= x) {
        return 1;
    }
    if (r - max(a, b) >= x || min(a, b) - l >= x) {
        return 2;
    }
    if ((r - b >= x && a - l >= x) || (r - a >= x && b - l >= x)) {
        return 3;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;  

    for (int i = 0; i < t; i++) {
        cout << solve() << endl;  
    }

    return 0;
}
