#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[1000];
ll a[20000],n,k;

ll check(ll b)
{
    memset(v,0,sizeof v);
    ll c=0,sum;
    for(ll i=n-1;i>=0;)
    {
        sum=0;
        while(i>=0 && sum+a[i]<=b)
        {
            sum+=a[i];
            i--;
        }
        if(sum==0) return k+1;
        c++;
        v[i]=1;
    }
    return c;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll lo=0,hi=0,i,j,l,c=0,mid;
       cin>>n>>k;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           lo=max(lo,a[i]);
           hi+=a[i];
       }

       while(lo<hi)
       {
           mid=(lo+hi)/2;
           if(check(mid)<=k)
           {
               hi=mid;
           }
           else lo=mid+1;
       }

       c=check(hi);
       for(i=0;i<n && c<k;i++)
       {
           if(v[i]==0)
           {
               v[i]=1;
               c++;
           }
       }
       for(i=0;i<n;i++)
       {
           if(i==0) cout<<a[i];
           else cout<<" "<<a[i];
           if(v[i]) cout<<" /";
       }
       cout<<endl;
   }


   return 0;
}
