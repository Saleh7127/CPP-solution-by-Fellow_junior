#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll t,n,m,i,j=0,k,l=0,q,x;


   cin>>n>>q;
   ll a[n+5];

   for(i=1;i<=n;i++)
   {
       cin>>a[i];
       if(a[i]==0) j++;
       else l++;
   }
   while(q--)
   {
       cin>>t>>x;

       if(t==1)
       {
           if(a[x]==1)
           {
               a[x]=0;
               j++;
               l--;
           }
           else
           {
               a[x]=1;
               j--;
               l++;
           }
       }
       else if(t==2)
       {
           if(x>l) cout<<0<<endl;
           else cout<<1<<endl;
       }
   }

   return 0;
}
