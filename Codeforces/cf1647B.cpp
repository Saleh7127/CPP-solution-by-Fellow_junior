/***
 created: 2022-03-13-20.29.46
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
        ll n,m,i,j,k,l=0;


        cin>>n>>m;

        char a[n+5][m+4];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }


        for(i=0;i<n-1;i++)
        {
            for(j=0;j<m-1;j++)
            {
                k=(a[i][j]-'0')+(a[i+1][j+1]-'0')+(a[i+1][j]-'0')+(a[i][j+1]-'0');

                if(k%3==0 && k)
                {
                    l=1;
                    break;
                }
            }
        }

        if(l) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

    }

    get_lost_idiot;
}

