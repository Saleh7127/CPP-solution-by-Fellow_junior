#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll b,c,d,e,i,j,k,l=0;

   cin>>a;
   for(i=a.size()-1;i>=0;i--)
   {
       if(a[i]!='/')
       {
           j=i;
           break;
       }
   }
   for(i=0;i<=j;i++)
   {
       if(a[i]=='/')
       {
           l++;
       }
       else l=0;
       if(l<=1) cout<<a[i];
   }

   cout<<endl;
   return 0;
}
