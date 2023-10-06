#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "NO" << endl
#define yy cout << "YES" << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);



    int year;

    string s;

    cin>>year;


    for(;;)

    {

        year++;

        s=to_string(year);



        if(s[0]!=s[1]&&s[0]!=s[2]&&s[0]!=s[3]&&s[1]!=s[2]&&s[1]!=s[3]&&s[2]!=s[3])

        {

            cout<<s<<endl;

            break;

        }

    }

    return 0;
}



