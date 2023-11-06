#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        ll ar[n];
        ll sum=0,odd=0,even=0;
        vector<ll>vc;
 
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
            if(ar[i]&1)odd++;
            else even++;
        }
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x==0)
            {
                ll res=even*y;
                sum+=res;
                vc.push_back(sum);
                if(y%2!=0)
                {
                    odd+=even;
                    even=0;
 
                }
 
            }
 
            else{
 
                ll res1=odd*y;
                sum+=res1;
                vc.push_back(sum);
                if(y%2!=0)
                {
                    even+=odd;
                    odd=0;
                }
 
            }
        }
 
        for(auto u : vc)
        {
            cout<<u<<endl;
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
