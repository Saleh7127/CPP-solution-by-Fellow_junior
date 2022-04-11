#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 4000

vector<ll>p;
ll fact[10000008];
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

void calculation()
{

    memset(fact,-1,sizeof fact);
    fact[0]=0;
    fact[1]=0;

    ll i,j,k,l,c,d,e,x=0;

    for(i=2; ;i++)
    {
        c=0;
        d=i;
        for(j=0;p[j]*p[j]<=d;j++)
        {
            if(d%p[j]==0)
            {
                while(d%p[j]==0)
                {
                    d/=p[j];
                    c++;
                }
            }
        }

        if(d>1) c++;
        x+=c;
        if(x>10000001) break;
        fact[x]=i;

    }

}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   sieve();
   calculation();

   ll n,z=1;

   while(cin>>n && n>=0)
   {

       cout<<"Case "<<z++<<": ";

       if(fact[n]==-1)
       {
           cout<<"Not possible."<<endl;
       }
       else cout<<fact[n]<<"!"<<endl;
   }


   return 0;
}
