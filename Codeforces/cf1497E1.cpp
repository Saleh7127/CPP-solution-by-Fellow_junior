#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define maX 10008
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
        ll c,n,m,i,j,k,l=1;

        cin>>n>>k;

        ll a[n+4];

        map<ll,ll>x;

        for(i=0;i<n;i++)
        {
             cin>>a[i];

             m=1;

             for(j=0;j<p.size() && p[j]*p[j]<=a[i];j++)
             {
                  if(a[i]%p[j]==0)
                  {
                       c=0;
                       while(a[i]%p[j]==0)
                       {
                            a[i]/=p[j];
                            c++;
                       }

                       if(c%2==1)
                       {
                            m*=p[j];
                       }
                  }
             }

             if(a[i]>1) m*=a[i];

             if(!x[m])
             {
                  x[m]=1;
             }
             else
             {
                  l++;
                  x.clear();
                  x[m]=1;
             }
        }
        cout<<l<<"\n";
   }

   return 0;
}
