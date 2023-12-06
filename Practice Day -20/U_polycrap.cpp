#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

void solve (){
    int t ; 
    cin>> t ;
    while(t--){
       
        string in ; 
        cin>> in ;
        vector<int> freq(26, 0); 
        
        for(char c : in) {
            freq[c - 'a']++; 
        }
        
        int count = 0;
        for(int f : freq) {
            if(f > 0) {
                count++;
            }
        }
        
        cout << count << endl;

    }
}

int main(){
    solve();
    return 0;
}
