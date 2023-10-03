
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    double ans = ((a - b) * 100.0) / a;

    cout << fixed << setprecision(10) <<ans<< endl;

    return 0;
}
