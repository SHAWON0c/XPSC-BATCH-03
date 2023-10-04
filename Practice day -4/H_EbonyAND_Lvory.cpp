#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;

    for (int i = 0; i <= 10000; i++) {
        for (int j = 0; j <=10000; j++) {
            if (a * i + b * j == c) {
                flag = true;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

