#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll b=0,c=0,d=0,e,f,i,j,k,l;

   cin>>a;
   for(i=0;i<a.size();i++)
   {

       if(a[i]=='o')
       {
           b+=c;
       }
       else if(i>0 && a[i-1]=='v')
       {
           c++;
           d+=b;
       }

   }
   cout<<d<<endl;

   return 0;
}
