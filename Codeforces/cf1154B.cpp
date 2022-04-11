#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster

   ll c,d,e,f,i,j,k,l;
   cin>>c;
   vector<ll>a(c) ;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a.begin(),a.end());
   a.resize(unique(a.begin(), a.end()) - a.begin());
   d=a.size();
   if(d>3) cout<<-1<<endl;
   else if(d==1) cout<<0<<endl;
   else if(d==2)
   {
       e=a[1]-a[0];
       if(e%2==0)
       {
           cout<<e/2<<endl;
       }
       else
       {
           cout<<e<<endl;
       }
   }
   else if(d==3)
   {
       e=a[1]-a[0];
       f=a[2]-a[1];
       if(e==f)
       {
           cout<<e<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
   }
   return 0;
}
