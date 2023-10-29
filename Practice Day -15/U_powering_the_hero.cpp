#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" <<endl

//const int N = (int)1e6 + 5;


void solveTest() {
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    priority_queue<ll> pq;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (!pq.empty()) {
                ans += pq.top();
                pq.pop();
            }
        } else {
            pq.push(a[i]);
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        solveTest();
    }

    return 0;
}
