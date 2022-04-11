/***
 created: 2022-02-06-23.31.06
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
        ll n,m,i,j,k,l;

        cin>>n>>m;

        if(m==1)
        {
            cout<<"YES"<<endl;
            l=1;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    cout<<l<<" ";
                    l++;
                }
                cout<<endl;
            }
        }

        else if(n%2)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            cout<<"YES"<<endl;

            k=1,l=2;

            for(i=1; i<=n; i++)
            {
                if(i%2)
                {
                     for(j=1;j<=m;j++)
                     {
                          cout<<k<<" ";
                          k+=2;
                     }
                }
                else
                {
                     for(j=1;j<=m;j++)
                     {
                          cout<<l<<" ";
                          l+=2;
                     }
                }
                cout<<nl;
            }
        }
    }

    get_lost_idiot;
}

