#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define maX 10000008
#define ll long long
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
        ll n,m,i,j,k,l=1;

        cin>>n;

        while(n%2==0) n/=2;

        for(i=1;i<p.size() && p[i]*p[i]<=n;i++)
        {
             if(n%p[i]==0)
             {
                  j=0;
                  while(n%p[i]==0)
                  {
                       j++;
                       n/=p[i];
                  }
                  l*=(j+1);
             }
        }

        if(n>2) l*=2;

        l--;

        cout<<"Case "<<cs<<": "<<l<<endl;


   }


   return 0;
}
