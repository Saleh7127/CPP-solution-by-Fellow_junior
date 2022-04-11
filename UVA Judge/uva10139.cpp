#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maX 1000008
vector<ll>p;
bool marked[maX];
void sieve()
{
    for(ll i=4;i<=maX;i+=2)
    {
        marked[i]=1;
    }
    p.push_back(2);
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
ll divoffact(ll nn,ll mm)
{
    ll i,j=0;
    for(i=mm;i<=nn;i*=mm)
    {
        j+=(nn/i);
    }
    return j;
}
int main()
{
   fellow_junior
   sieve();
   ll a,c,d,e,fact,fact2,i,j,k,l;
   while(cin>>a>>c)
   {
       j=1;
       e=c;
       for(i=0;p[i]*p[i]<=c && i<p.size();i++)
       {
           d=p[i];
           fact=0;
           while(c%d==0)
           {
               c/=d;
               fact++;
           }
           fact2=divoffact(a,d);
           if(fact2<fact)
           {
               j=0;
               break;
           }
       }
       if(c!=1 && c>a)
       {
           j=0;
       }
       if(j) cout<<e<<" divides "<<a<<"!"<<endl;
       else cout<<e<<" does not divide "<<a<<"!"<<endl;
   }
   return 0;
}
