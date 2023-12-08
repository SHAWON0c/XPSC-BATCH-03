#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve (){
    int t;
    cin>>t;
    while(t--)
    {
       
        string a,b;
        cin>>a>>b;
        int lenA=a.size();
        int lenB=b.size();
 
       
 
        if(a==b)cout<<"="<<endl;
        else if(a[a.size()-1]=='S' && b[b.size()-1]=='S' && lenA>lenB)cout<<"<"<<endl;
        else if(a[a.size()-1]=='S' && b[b.size()-1]=='S' && lenA<lenB)cout<<">"<<endl;
        else if(a[a.size()-1]=='L' && b[b.size()-1]=='L' && lenA>lenB)cout<<">"<<endl;
        else if(a[a.size()-1]=='L' && b[b.size()-1]=='L' && lenA<lenB)cout<<"<"<<endl;
        else if(a[a.size()-1]=='L' && b[b.size()-1]=='M')cout<<">"<<endl;
        else if(b[b.size()-1]=='L' && a[a.size()-1]=='M')cout<<"<"<<endl;
        else if(a[a.size()-1]=='S' && (b[b.size()-1]=='M' ||  b[b.size()-1]=='L'))cout<<"<"<<endl;
        else if(b[b.size()-1]=='S' && (a[a.size()-1]=='M' ||  a[a.size()-1]=='L'))cout<<">"<<endl;
 
    }
        


        

    
}


int main(){
solve();
}