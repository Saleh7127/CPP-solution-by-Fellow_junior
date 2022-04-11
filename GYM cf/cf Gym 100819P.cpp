#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll c[27]={0},d,e,i,j,k,l;

   cin>>a;
   d=a.size();
   l=0;
   for(i=0;i<d;i++)
   {
       c[a[i]-'a']++;
   }
   for(i=0;i<26;i++)
   {
       if(c[i]) l++;
   }
   if(l<=2) cout<<0<<endl;
   else
   {
       l=0;
       sort(c,c+27);
       for(i=0;i<25;i++)
       {
           l+=c[i];

       }
       cout<<l<<endl;
   }
   return 0;
}
