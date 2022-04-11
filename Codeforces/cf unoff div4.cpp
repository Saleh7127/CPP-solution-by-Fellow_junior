#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a[200005],c,d=999999999999,e,i,j,k,l;

   cin>>c;

   for(i=0;i<c;i++)
   {
       cin>>a[i];
       if(a[i]%2==0)
       {
           d=min(d,a[i]);
       }
   }
   if(d==999999999999) cout<<-1<<endl;

   else
   {
       e=d;
       sort(a,a+c,greater<int>());
       for(i=0;i<c;i++)
       {
           if(a[i]==d)
           {
               d=-1;
               continue;
           }
           cout<<a[i];
       }
       cout<<e<<endl;
   }

   return 0;
}
