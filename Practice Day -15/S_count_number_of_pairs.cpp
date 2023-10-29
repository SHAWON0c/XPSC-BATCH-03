#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl


void solve()

{
    int t ;
    cin>> t ;

         while(t--)
         {
        int n,k;            
        cin>>n>>k;
        string s;          
        cin>>s;
 
        ll ans=0;
        map<char,int> freq;
        for(auto c:s)
            freq[c]++;
 
        for(char c='a';c<='z';c++){
            int mn=min(freq[c],freq[(c-32)]);
            ans+=mn;
            freq[c]-=mn;
            freq[c-32]-=mn;
        }
 
        for(char c='a';c<='z';c++){
            int add=max(freq[c],freq[c-32]);
            int mn=min(k,add/2);
           // cout<<"mn - "<<mn<<endl;

            ans+=mn;
            k-=mn;
           // cout<< "k -" << k <<endl ;
        }
 
        cout<<ans<<endl;
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
