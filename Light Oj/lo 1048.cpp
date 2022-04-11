#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[10000],n,k,i,j,l,mx,hi,lo,mi,ans,mid;

bool valid(ll x)
{
    ll c=0,sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            return 0;
        }
        sum+=a[i];
        if(sum>x)
        {
            sum=a[i];
            c++;
        }
        if(i==n-1 && sum<=x) c++;
    }

    if(c<=k) return 1;
    return 0;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       cin>>n>>k;
       n++,k++;
       mi=100000000,mx=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           mi=min(a[i],mi);
           mx+=a[i];
       }
       ans=mi;
       lo=mi;
       hi=mx;
       while(lo<=hi)
       {
           mid=(lo+hi)/2;
           if(valid(mid))
           {
               ans=mid;
               hi=mid-1;
           }
           else lo=mid+1;
       }
       cout<<"Case "<<cs<<": "<<ans<<endl;
       mx=0;
       j=0;
       for(i=0;i<n;i++)
       {
           if(mx+a[i]==ans)
           {
               cout<<mx+a[i]<<endl;
               mx=0;
               j++;
           }
           else if(mx+a[i]>ans)
           {
               cout<<mx<<endl;
               mx=a[i];
               j++;
           }
           else if(n-i==k-j)
           {
               cout<<mx+a[i]<<endl; ///protidin min hattei hove shei jonno
               mx=0; ///check korvo remaining day-n r remaining night-k
               j++; /// jodi equal hoi taile print koiraa divoo
           }
           else mx+=a[i];
       }
       if(mx>0) cout<<mx<<endl;
   }


   return 0;
}

