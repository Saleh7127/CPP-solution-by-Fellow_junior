#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 100008
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

ll primefact(ll n)
{
     ll i,j,k,l=0;

     for(i=0;i<p.size() && p[i]*p[i]<=n;i++)
     {
          if(n%p[i]==0)
          {
               while(n%p[i]==0)
               {
                    l++;
                    n/=p[i];
               }
          }
     }

     if(n>1) l++;

     return l;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();

   test
   {
        ll n,m,i,j,k,l,a,b;

        cin>>a>>b>>k;
        if(a>b) swap(a,b);

        if(k==1)
        {
             if(b%a==0 && b!=a) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
        else
        {
             n=primefact(a)+primefact(b);

             if(k<=n) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
   }

   return 0;
}

