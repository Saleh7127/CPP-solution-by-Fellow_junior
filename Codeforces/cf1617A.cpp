/***
 created: 2022-03-14-22.48.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        string a,b;

        ll n,m,i,j,k,l;

        cin>>a>>b;

        if(b=="abc")
        {
            j=k=l=0;

            string d;

            for(char c:a)
            {
                if(c=='a') j++;
                else if(c=='b') k++;
                else if(c=='c') l++;
                else d.push_back(c);
            }

            if(j==0)
            {
                sort(a.begin(),a.end());

                cout<<a<<nl;
            }
            else

            {
                while(j--) cout<<"a";
                while(l--) cout<<"c";
                while(k--) cout<<"b";

                sort(d.begin(),d.end());

                cout<<d<<nl;
            }

        }
        else
        {
            sort(a.begin(),a.end());

            cout<<a<<nl;
        }
    }


    get_lost_idiot;
}
