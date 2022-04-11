#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       ll a[10000],c,d[10000]={0},e=0,f,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
           d[a[i]]++;
       }
       for(i=0;i<c;i++)
       {
           f=0;
           for(j=i;j<c;j++)
           {
               f+=a[j];
               if(j==i) continue;
               if(f<=c)
               {
                   e+=d[f];
                   d[f]=0;
               }
           }
       }
       cout<<e<<endl;
   }
   return 0;
}
