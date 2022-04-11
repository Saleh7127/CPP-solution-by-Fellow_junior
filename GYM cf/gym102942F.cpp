#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[200000],c[2000000];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll b,d,e,f,i,j,k,l;
       cin>>b>>k;
       for(i=0;i<b;i++)
       {
           cin>>a[i];
           c[a[i]]=0;
       }
       l=0,e=0,f=0;
       for(i=0;i<b;i++)
       {
           if(c[a[i]]==0)
           {
               f+=a[i];
           }
           c[a[i]]++;
           while(f>k)
           {
               c[a[l]]--;
               if(c[a[l]]==0)
               {
                   f-=a[l];
               }
               l++;
           }
           e=max(e,i-l+1);
       }
       cout<<e<<endl;
   }


   return 0;
}
