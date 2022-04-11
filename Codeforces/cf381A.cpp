#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a[20000],c,d=0,e=0,f=0,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   j=0;
   k=c-1;
   for(i=0;i<c;i++)
   {
       if(j>k)
       {
           break;
       }
       if(f%2==0)
       {
           if(a[j]>a[k])
           {
               d+=a[j];
               j++;
           }
           else
           {
               d+=a[k];
               k--;
           }
           f++;
       }
       else
       {
           if(a[j]>a[k])
           {
               e+=a[j];
               j++;
           }
           else
           {
               e+=a[k];
               k--;
           }
           f++;
       }
   }
   cout<<d<<" "<<e<<endl;
   return 0;
}
