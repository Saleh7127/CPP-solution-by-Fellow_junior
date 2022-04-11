#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll c,d,e=0,i,j=0,k,l=0;
   vector<ll>a[10000];

   test
   {
      cin>>c>>d;
      a[c].push_back(d);

      j=max(j,max(c,d));
   }
   ll x[10000]={0};
   for(i=0;i<=j;i++)
   {
       l=0;
       for(k=0;k<a[i].size();k++)
       {
           if(x[a[i][k]]==0)
           {
               l++;
               x[a[i][k]]=1;
           }
       }
       if(l>=3)
       {
           cout<<"Yes"<<endl;
           return 0;
       }
   }
   cout<<"No"<<endl;
   return 0;
}
