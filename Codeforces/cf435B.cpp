#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll c,d,e,i,j,k;
   cin>>a>>k;

   for(i=0;i<a.size()-1;i++)
   {
       c=i;
       for(j=i+1;j<a.size() && j-i<=k;j++)
       {
           if(a[j]>a[c])
           {
               c=j;
           }
       }
       k-=(c-i);
       while(c!=i)
       {
           swap(a[c],a[c-1]);
           c--;
       }
   }

   cout<<a<<endl;

   return 0;
}
