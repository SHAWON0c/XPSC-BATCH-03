
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a , b ;
    cin>>a >>b ;
    if(a>b)cout<<a+(a-1);
    else if(a==b)cout<<a+b<<endl;
    else cout<<b+(b-1)<<endl;
}
