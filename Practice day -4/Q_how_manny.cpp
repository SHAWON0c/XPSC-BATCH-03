#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int main() {


          int t;
           cin>>t;
           while(t--){
        int n;
         cin>>n;

        map<string,int> freq;

        vector<string> a[3];
        for(int i=0;i<3;i++){
            a[i].resize(n);
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                freq[a[i][j]]++;
            }
        }
        int p[3]={0};
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                if(freq[a[i][j]]==1){
                    p[i]+=3;
                }
                else if(freq[a[i][j]]==2){
                    p[i]+=1;
                }
            }
        }

        cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;

    }




    return 0;
}

