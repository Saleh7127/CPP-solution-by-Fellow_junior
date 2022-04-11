#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000108
vector<ll>p;
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    p.push_back(2);
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

ll solve(ll a)
{
    ll ans=0,lo,hi,mid,i,j,k,l;
    for(i=0;i<p.size() && a-p[i]>p[i];i++)
    {
        ll curentprime=a-p[i];
        lo=i+1;
        hi=p.size()-1;
        k=i;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(p[mid]<=curentprime)
            {
                lo=mid+1;
                k=mid;
            }
            else hi=mid-1;
        }
        ans+=(k-i);
    }
    return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();

   ll a,c=0,d;
   while(cin>>a && a)
   {
       cout<<"Case "<<++c<<": "<<solve(a)<<endl;
   }


   return 0;
}
