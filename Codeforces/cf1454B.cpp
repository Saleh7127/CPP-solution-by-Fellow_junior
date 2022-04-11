#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll x[200005];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,a[200005]={0},c=-1,d,e=-1,f,i,j,k,l;
       cin>>n;
       for(i=1;i<=n;i++)
       {
           cin>>d;
           x[i]=d;
           a[d]++;
           c=max(c,d);
       }

       for(i=1;i<=c;i++)
       {
           if(a[i]==1)
           {
               e=i;
               break;
           }
       }
       if(e==-1) cout<<-1<<endl;
       else
       {
           for(i=1;i<=n;i++)
           {
               if(x[i]==e)
               {
                   cout<<i<<endl;
                   break;
               }
           }
       }
   }


   return 0;
}
