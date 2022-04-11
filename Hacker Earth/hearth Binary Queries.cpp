#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[1000005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll c,d,e,f,i,j,k,l;
   cin>>c>>d;
   for(i=1;i<=c;i++)
   {
       cin>>a[i];
   }
   while(d--)
   {
       cin>>e;
       if(e==0)
       {
           cin>>f>>j;
           if(a[j]==0) cout<<"EVEN"<<endl;
           else cout<<"ODD"<<endl;
       }
       else
       {
           cin>>f;
           if(a[f]==0) a[f]=1;
           else a[f]=0;
       }
   }

   return 0;
}
