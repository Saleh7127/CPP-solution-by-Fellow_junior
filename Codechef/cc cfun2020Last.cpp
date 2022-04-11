#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   while(cin>>a)
   {
       ll i,j,k,l,d=0;
       for(i=0;i<a.size();i++)
       {
           l=92-a[i];
           d+=l;
       }
       cout<<d<<endl;
   }


   return 0;
}
