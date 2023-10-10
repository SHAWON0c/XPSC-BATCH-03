#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}




int countAlmostPrimes(int n)
{
    int count = 0;
    for (int i= 1; i <= n; i++)
    {
        vector<int> primeDivisors;
        for (int j = 2; j <= i; j++)
        {
            if (i % j== 0 && isPrime(j))
            {
                primeDivisors.push_back(i);
            }
            if (primeDivisors.size() > 2)
            {
                break;
            }
        }
        if (primeDivisors.size() == 2)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    int result = countAlmostPrimes(n);


    cout<<result<<endl;

    return 0;
}
