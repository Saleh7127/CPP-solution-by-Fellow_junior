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
       ll a[10005]={0},c,d,e,i,j,k,l,n;
       cin>>n>>k>>l;
       if(n>(k*l))
       {
           cout<<-1<<endl;
           continue;
       }
       if(k==1 && n>1)
       {
           cout<<-1<<endl;
           continue;
       }
       for(i=1;i<=k;i++)
       {
           a[i]=l;
       }
       d=1;
       j=0;
       while(1)
       {
           if(j==n) break;
           if(d>k)
           {
               d=1;
           }

           if(a[d]>0)
           {
               if(j==n-1) cout<<d<<endl;
               else cout<<d<<" ";
               a[d]--;
               d++;
               j++;
           }
           else if(a[d]==0)
           {
               d++;
           }
       }

   }
   return 0;
}
