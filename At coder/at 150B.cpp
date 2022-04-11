#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll c,d=0,i;
   string a;
   cin>>c>>a;
   for(i=0;i<c-2;i++)
   {
       if(a[i]=='A' && a[i+1]=='B' && a[i+2]=='C')
       {
           d++;
           i+=2;
       }
   }

   cout<<d<<endl;
   return 0;
}
