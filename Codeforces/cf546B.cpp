#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a[20000],c,d,e=0,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   for(i=1;i<c;i++)
   {
       if(a[i]-a[i-1]>=1)
       {
           continue;
       }
       else
       {
           d=llabs(a[i]-a[i-1])+1;
           a[i]=a[i]+d;
           e+=d;
       }
   }
   cout<<e<<endl;
   return 0;
}
