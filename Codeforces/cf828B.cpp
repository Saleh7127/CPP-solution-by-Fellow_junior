#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll r,c,i,j,k,l=0,mx=0,my=0,lx=1000,ly=1000;
   char a[102][102];
   cin>>r>>c;
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           cin>>a[i][j];
       }
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(a[i][j]=='B')
           {
               l++;
               mx=max(mx,i);
               lx=min(lx,i);
               my=max(my,j);
               ly=min(ly,j);
           }
       }
   }
   k=max(mx-lx+1,my-ly+1);
   if(l==0) cout<<1<<endl;
   else if(k>r || k>c) cout<<-1<<endl;
   else cout<<(k*k-l)<<endl;
   return 0;
}
