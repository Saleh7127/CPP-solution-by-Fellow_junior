#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll t,rr;
   cin>>t;
   for(rr=1;rr<=t;rr++)
   {
       ll c=0,n,m,k,i,j,l,p,x;
       ll a[500][500];
       ll check[500]={0};
       cin>>n>>m>>k;
       for(i=0;i<n;i++)
       {
           for(j=0;j<k;j++)
           {
               cin>>a[i][j];
           }
       }
       cin>>p;
       for(i=0;i<p;i++)
       {
           cin>>x;
           check[x]=1;
       }
       for(i=0;i<n;i++)
       {
           l=0;
           for(j=0;j<k;j++)
           {
               x=a[i][j];
               if(x>0 && check[x]==1)
               {
                   l=1;
               }
               else if(x<0 && check[-x]==0)
               {
                   l=1;
               }
           }
           if(l) c++;
       }
       cout<<"Case "<<rr;
       if(c==n) cout<<": Yes\n";
       else cout<<": No\n";
   }
   return 0;
}
