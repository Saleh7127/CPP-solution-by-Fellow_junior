#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll e[10000],o[10000],a,c,d,f,i,j=0,k=0,ans=0;
   cin>>c;
   while(c--)
   {
       cin>>d;
       if(d%2) o[j++]=d;
       else e[k++]=d;
   }
   if(j>k)
   {
       sort(o,o+j);
       for(i=0;i<j-k-1;i++)
       {
           ans+=o[i];
       }
   }
   else
   {
       sort(e,e+k);
       for(i=0;i<k-j-1;i++)
       {
           ans+=e[i];
       }
   }
   cout<<ans<<endl;
   return 0;
}
