#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define get_lost_idiot return 0

int main()
{

    int tt;
    cin>>tt;
    for(int cs=1; cs<=tt; cs++)
    {
        ll n,m,i,j,k,l,x,y,z;

        cin>>n>>m;

        ll a[n+4]={0};


        for(i=1;i<=m;i++)
        {
             cin>>x>>y>>z;

             a[y]++;
        }

        ll ans;

        for(i=1;i<=n;i++)
        {
             if(a[i]==0)
             {
                  ans=i;
                  break;
             }
        }


        for(i=1;i<=n;i++)
        {
             if(i!=ans)
             {
                  cout<<i<<" "<<ans<<endl;
             }
        }

    }

    get_lost_idiot;
}

