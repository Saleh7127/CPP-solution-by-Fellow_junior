/***
 created: 2022-01-16-21.16.15
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
        string a,b,c;

        ll n,m,i,j,k=0,l;

        cin>>a;

        for(i=0; i<a.size()-1; i++)
        {
            j=a[i]-'0';
            j+=(a[i+1]-'0');

            if(j>9)
            {
                l=i;
                k=1;
            }
        }

        if(k)
        {
            for(i=0; i<l; i++)
            {
                cout<<a[i];
            }

            j=a[l]-'0';
            j+=(a[l+1]-'0');

            cout<<j;


            for(i=l+2; i<a.size(); i++)
            {
                cout<<a[i];
            }

            cout<<nl;
        }
        else
        {
            j=a[0]-'0';
            j+=(a[1]-'0');

            cout<<j;
            for(i=2; i<a.size(); i++)
            {
                cout<<a[i];
            }
            cout<<nl;
        }
    }


    get_lost_idiot;
}

