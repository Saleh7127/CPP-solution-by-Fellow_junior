#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,b,c,d,e,f,i,j,k,l=0;

       cin>>n>>k;
       ll a[n+5];

       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>=k)
           {
               l++;
               a[i]=0;
           }
       }

       sort(a,a+n);
       i=0,j=n-1;

       while(i<j)
       {
           if((a[i]+a[j])>=k && a[i]!=0 && a[j]!=0)
           {
               l++;
               a[i]=0;
               a[j]=0;
               i++;
               j--;
           }
           else if(a[i]+a[j]<k)
           {
               i++;
           }
       }
       cout<<l<<endl;
   }


   return 0;
}
