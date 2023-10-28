#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" <<endl

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        set<int> elements;
        set<int> final;
        int mx = 0;

        for (int i = 0; i < m; i++)
        {
            int num;
            cin >> num;
            if (num > mx) {
                mx = num;
            }
            elements.insert(num);
            final.insert(num);
        }
        //cout<<mx<<endl;
        bool flag = false;

        int remaining_sum = s;
        for (int i = 1; i <= s; i++)
        {
            if (elements.find(i) == elements.end())
            {
                remaining_sum -= i;
                  final.insert(i);

            }

            if (remaining_sum == 0  )
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {  bool bal = true ;
           // cout << "YES" << endl;
           for( int i =1;i<=mx;i++){
             if(final.find(i) == final.end()){
               bal= false ;
               break;
             }
             
           }

           if(bal)yy;
           else nn;
        }
        else
        {
            nn;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
