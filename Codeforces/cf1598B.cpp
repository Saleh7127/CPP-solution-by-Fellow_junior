#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,m,i,j,k,l=0,x,y,z;

        cin>>n;

        ll a[n+2][6];

        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cin>>a[i][j];
            }
        }

        ll c[n+4];

        memset(c,0,sizeof c);

        for(i=0; i<4; i++)
        {

            for(j=i+1; j<5; j++)
            {
                x=y=z=0;

                for(k=0; k<n; k++)
                {
                    if(a[k][i]==1 && a[k][j]==1) z++;

                    if(a[k][i]==1) x++;

                    if(a[k][j]==1) y++;
                }

                if((x+y-z)==n && (x-z)<=(n/2) && (y-z)<=(n/2))
                {
                    cout<<"YES"<<endl;
                    l=1;
                    break;
                }
            }

            if(l) break;
        }

        if(!l) cout<<"NO"<<endl;
    }

    return 0;
}

