#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200005],c,d,e,f,i,j,k,l;

   cin>>c;
   string x;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   k=min(a[0],a[c-1]);
   i=0;
   j=c-1;

   for(l=1;l<=c;l++)
   {
       if(a[i]>=k && a[j]>=k)
       {
           k=min(a[i],a[j]);
           if(k==a[i])
           {
               x+='L';
               i++;
           }
           else
           {
               x+='R';
               j--;
           }
       }
       else if(a[i]>=k)
       {
           k=a[i];
           x+='L';
           i++;
       }
       else if(a[j]>=k)
       {
           k=a[j];
           x+='R';
           j--;
       }
   }
   cout<<x.size()<<endl<<x<<endl;
   return 0;
}
