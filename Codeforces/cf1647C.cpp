/***
 created: 2022-03-13-22.40.43
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

struct sss
{
    ll c,d,e,f;
};
sss ans[10000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,j,k,l;


        cin>>n>>m;

        char a[n+4][m+4];

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)

            {
                cin>>a[i][j];
            }
        }

        if(a[0][0]=='1') cout<<-1<<nl;
        else
        {

            l=0;
            for(j=m-1; j>=0; j--)
            {
                for(i=n-1; i>=0; i--)
                {
                    if(a[i][j]=='1')
                    {
                        if(i!=0)
                        {
                            ans[l].c=i;
                            ans[l].d=j+1;
                            ans[l].e=i+1;
                            ans[l].f=j+1;
                            l++;
                        }
                        else
                        {
                            ans[l].c=i+1;
                            ans[l].d=j;
                            ans[l].e=i+1;
                            ans[l].f=j+1;
                            l++;
                        }
                    }
                }
            }

            cout<<l<<nl;
            for(i=0;i<l;i++)
            {
                cout<<ans[i].c<<" "<<ans[i].d<<" "<<ans[i].e<<" "<<ans[i].f<<nl;
            }
        }
    }

    get_lost_idiot;
}
