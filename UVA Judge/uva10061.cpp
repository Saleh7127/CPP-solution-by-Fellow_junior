#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll zero(ll n,ll m)
{
    ll ans=n,i,j,k=m,l;
    for(i=2;i<=m;i++)
    {
        if(m%i==0)
        {
            ll pwr=0;
            while(m%i==0)
            {
                pwr++;
                m/=i;
            }
            j=0;
            l=n;
            while(l/i>0)
            {
                j+=(l/i);
                l/=i;
            }
            ans=min(ans,j/pwr);
        }
    }
    return ans;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,i;
   while(cin>>a>>c)
   {
       double d=0;
       for(i=1;i<=a;i++)
       {
           d+=log(i);
       }
       d=double((d/log(c))+1.00);
       cout<<zero(a,c)<<" "<<(ll)d<<endl;
   }

   return 0;
}
