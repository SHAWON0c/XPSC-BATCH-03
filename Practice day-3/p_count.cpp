#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;

    if (n < 3) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
