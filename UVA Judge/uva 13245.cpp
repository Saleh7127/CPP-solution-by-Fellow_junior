#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll dp[20000];
#define maX 100008
bool marked[maX+2];
vector<ll>p;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    p.push_back(1);
    p.push_back(2);
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
}
ll cc(ll n,ll v)
{
    ll i,j,k,l;

    dp[0]=0;

    for(i=1;i<=10000;i++)
    {
        dp[i]=INT_MAX;
    }

    for(i=0;i<n;i++)
    {
        for(j=1;j<=v;j++)
        {
            if(j>=p[i] && dp[j]>(1+dp[j-p[i]]))
            {
                dp[j]=1+dp[j-p[i]];
            }
        }
    }
    return dp[v];
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();

   test
   {
       ll n,m,i,j,k,l;

       cin>>n>>m;
       cout<<cc(n,m)<<endl;
   }


   return 0;
}

