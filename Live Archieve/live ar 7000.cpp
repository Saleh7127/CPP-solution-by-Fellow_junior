#include <bits/stdc++.h>
using namespace std;
bool a[10005][10005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int n,m,l,d,e,i,j,k;
       cin>>n>>m>>l;
       memset(a,0,sizeof(a));
       for(i=0;i<m;i++)
       {
           cin>>d>>e;
           a[d][e]=1;
       }
       for(i=0;i<n;i++)
       {
           int prsntj=i;
           k=0;
           while(k<=l)
           {
               if(a[prsntj][k])
               {
                   prsntj++;
               }
               else if(prsntj>0 && a[prsntj-1][k])
               {
                   prsntj--;
               }
               k++;
           }
           cout<<prsntj<<endl;
       }
   }
   return 0;
}
