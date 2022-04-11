#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       string a;
       long long n,m,c[26]={0},d[200005]={0},e,f,i,j,k,l;
       cin>>n>>m;
       cin>>a;
       for(i=1;i<=m;i++)
       {
           cin>>e;
           d[e]++;
       }
       for(i=n;i>=1;i--)
       {
           d[i]+=d[i+1];
       }
       for(i=1;i<=n;i++)
       {
           d[i]++;
       }

       for(i=0;i<n;i++)
       {
           c[a[i]-'a']+=d[i+1];
       }
       for(i=0;i<26;i++)
       {
           cout<<c[i]<<" ";
       }
       cout<<endl;
   }
   return 0;
}
