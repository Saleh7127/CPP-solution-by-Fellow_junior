#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000008
bool marked[maX];
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
}
ll mod(ll a,ll n,ll m)
{
    if(n==0) return 1;
    ll x=mod(a,n/2,m);
    x=(x*x)%m;
    if(n%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}
int main()
{
   fellow_junior
   sieve();
   ll a,c,d,n,i,j,k,l;
   while(cin>>n &&n)
   {
       if(marked[n]==0)
       {
           cout<<n<<" is normal."<<endl;
           continue;
       }
       d=0;
       for(i=2;i<n;i++)
       {
           a=mod(i,n,n);
           if(i!=a)
           {
               d=1;
               break;
           }
       }
       if(d) cout<<n<<" is normal."<<endl;
       else
       {
           cout<<"The number "<<n<<" is a Carmichael number."<<endl;
       }
   }
   return 0;
}
