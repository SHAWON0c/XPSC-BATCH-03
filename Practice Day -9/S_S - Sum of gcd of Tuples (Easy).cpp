#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
    int K;
    cin >> K;

    long long sum = 0;

    for (int a = 1; a <= K; a++)
    {
        for (int b = 1; b <= K; b++)
        {
            for (int c = 1; c <= K; c++)
            {
                sum += __gcd(__gcd(a, b), c);
            }
        }
    }

    cout << sum << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
