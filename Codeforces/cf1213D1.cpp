#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll cnt(ll val,ll t)
{
    ll ans=0;
    while(val>t)
    {
        val/=2;
        ans++;
    }
    if(val==t) return ans;
    else return -1;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll c,d,e=0,f,i,j,k,l;
   cin>>c>>d;
   ll a[c+6];
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       e=max(e,a[i]);
   }
   f=10000000;
   for(i=0;i<=e;i++)
   {
       vector<ll>ans;
       for(j=0;j<c;j++)
       {
           k=cnt(a[j],i);
           if(k!=-1)
           {
               ans.push_back(k);
           }
       }
       if(ans.size()>=d)
       {
           sort(ans.begin(),ans.end());
           l=0;
           for(ll g=0;g<d;g++)
           {
               l+=ans[g];
           }
           f=min(f,l);
       }

   }
   cout<<f<<endl;
   return 0;
}
