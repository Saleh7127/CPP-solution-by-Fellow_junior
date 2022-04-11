#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000008
bool marked[maX];
vector<ll>p;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
               marked[j]=1;
            }
        }
    }
    p.push_back(2);
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }
}
int main()
{
   fellow_junior
   sieve();
   ll a,c,d,e,f,i,j,k=1,l,sum;
   while(cin>>a && a)
   {
       if(a==1)
       {
           cout<<"Case "<<k<<": "<<2<<endl;
       }
       else
       {
           c=0;
           sum=0;
           l=a;
           for(i=0;i<p.size() && p[i]*p[i]<=l;i++)
           {
               if(a%p[i]==0)
               {
                   c++;
                   d=1;
                   while(a%p[i]==0)
                   {
                       a/=p[i];
                       d*=p[i];
                   }
                   sum+=d;
               }
           }
           if(a>1)
           {
               sum+=a;
               c++;
           }
           if(c==1)
           {
               sum++;
           }
           cout<<"Case "<<k<<": "<<sum<<endl;
       }
       k++;
   }
   return 0;
}
