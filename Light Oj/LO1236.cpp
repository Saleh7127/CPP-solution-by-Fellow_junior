/***
 created: 2021-10-27-19.06.17
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

#define maX 10000008
bool marked[maX+2];
vector<ll>p;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
    p.push_back(2);
    for(ll i=3; i<=maX; i+=2)
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

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   sieve();

   test
   {
        ll n,m,i,j,k,l,ans=1;

        cin>>n;

        for(i=0;i<p.size() && p[i]*p[i]<=n;i++)
        {
             if(n%p[i]==0)
             {
                  l=0;

                  while(n%p[i]==0)
                  {
                       l++;
                       n/=p[i];
                  }

                  ans*=(2*l+1);
             }
        }

        if(n>1) ans*=3; ///cause n remains 1 time == (2*x+1)

        ans=(ans+1)/2;

        cout<<"Case "<<cs<<": "<<ans<<nl;
   }


   get_lost_idiot;
}
