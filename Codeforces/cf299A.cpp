#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200005],c,d,e,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);

   for(i=0;i<c;i++)
   {
       if(a[i]%a[0]!=0)
       {
           cout<<-1<<endl;
           return 0;
       }
   }
   cout<<a[0]<<endl;
   return 0;
}
