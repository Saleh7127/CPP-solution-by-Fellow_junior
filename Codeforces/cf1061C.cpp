#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll mod=1e9+7;

vector<ll>di[1000222];

void pre()
{
    ll i,j;
    for(i=1;i<=1000000;i++)
    {
        for(j=i;j<=1000000;j+=i)
        {
            di[j].push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    pre();

    ll x,n,m,i,j,k,l,ans=0;

    cin>>n;

    ll a[n+4]={0};

    a[0]=1;

    for(i=1;i<=n;i++)
    {
         cin>>x;

         for(j=di[x].size()-1;j>=0;j--)
         {
              m=di[x][j];
              if(m<=i)
              {
                   if(m==1) a[m]=(a[m]+1)%mod;
                   else a[m]=(a[m-1]+a[m])%mod;
              }
         }
    }

    for(i=1;i<=n;i++)
    {
         ans=(ans+a[i])%mod;
    }


    cout<<ans<<endl;

    return 0;
}
