#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   string a;
   ll c,i,j=0,k,l;
   cin>>a;

   for(i=0;i<a.size();i++)
   {
       if(a[i]=='1') break;
   }
   for(;i<a.size();i++)
   {
       if(a[i]=='0') j++;
   }
   if(j>=6) cout<<"yes"<<endl;
   else cout<<"no"<<endl;
   return 0;
}
