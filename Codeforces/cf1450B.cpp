#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d,e=0,f=0,i,j=0,k=0,l=0,m;
       cin>>a>>b;
       vector<pair<ll,ll>>x;
       for(i=0;i<a;i++)
       {
           cin>>c>>d;
           x.push_back({c,d});
       }
       c=0;
       m=0;
       d=10000000000000;
       for(i=0;i<a;i++)
       {
           e=x[i].first;
           f=x[i].second;
           for(j=0;j<a;j++)
           {
               k=x[j].first;
               l=x[j].second;
               c=abs(k-e)+abs(l-f);
               m=max(m,c);
           }
           if(m<=b)
           {
               d=m;
               break;
           }
           m=0;
       }

       if(d<=b) cout<<1<<endl;
       else cout<<-1<<endl;

   }


   return 0;
}
