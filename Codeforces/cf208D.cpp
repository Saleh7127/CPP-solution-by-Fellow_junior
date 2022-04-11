#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[1000],n,i,p[100];
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<5;i++)
   {
       cin>>p[i];
   }
   ll s=0,ans[5]={0};
   for(i=0;i<n;i++)
   {
       s+=a[i];
       if(s>=p[4])
       {
           ans[4]+=(s/p[4]);
           s%=p[4];
       }
       if(s>=p[3])
       {
           ans[3]+=(s/p[3]);
           s%=p[3];
       }
       if(s>=p[2])
       {
           ans[2]+=(s/p[2]);
           s%=p[2];
       }
       if(s>=p[1])
       {
           ans[1]+=(s/p[1]);
           s%=p[1];
       }
       if(s>=p[0])
       {
           ans[0]+=(s/p[0]);
           s%=p[0];
       }
   }
   for(i=0;i<5;i++)
   {
       cout<<ans[i]<<" ";
   }
   cout<<endl<<s<<endl;
   return 0;
}
