#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll happ[100005];
ll xxx(ll a)
{
    ll ans=0,r=0;
    while(a)
    {
        r=a%10;
        ans+=(r*r);
        a/=10;
    }
    return ans;
}

void cal()
{
    ll i,j;
    for(i=1;i<=99999;i++)
    {
        ll n=i,cnt=0;
        while(n>9)
        {
            n=xxx(n);
            cnt++;
        }
        if(n==7)
        {
            cnt+=5;
            n=1;
        }
        if(n==1)
        {
            happ[i]=cnt+1;
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cal();

   ll a,c,d,e,f,i,j,k,l=0;

   while(cin>>a>>c)
   {
       l++;
       if(l>1) cout<<endl;
       for(i=a;i<=c;i++)
       {
           if(happ[i]) cout<<i<<" "<<happ[i]<<endl;
       }
   }
   return 0;
}
