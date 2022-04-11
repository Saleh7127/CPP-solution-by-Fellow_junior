#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long
#define maX 100000002
bool marked[maX];
vector<int>p;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    p.push_back(2);
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
    for(ll i=3;i<=maX;i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }
}
ll fact(ll n)
{
    ul sum=1;
    ll i,j,k,l;
    for(i=0;p[i]*p[i]<=n && i<p.size();i++)
    {
        if(n%p[i]==0)
        {
            ll f=1,x=1;
            while(n%p[i]==0)
            {
               f*=p[i];
               x+=f;
               n/=p[i];
            }
            sum*=x;
        }
    }
    if(n>1)
    {
        sum*=(1+n);
    }
    return sum;
}
int main()
{

   ll n;
   sieve();
   int t;
   cin>>t;
   while(t--)
   {
       cin>>n;
       if(n==0) return 0;
       cout<<fact(n)-n<<endl;
   }

   return 0;
}
