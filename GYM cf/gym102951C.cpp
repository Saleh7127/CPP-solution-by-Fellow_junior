/***
 created: 2021-10-16-21.46.27
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int n,i,j,m;

   cin>>n;

   int a[n+4],b[n+4];

   map<int,int>pos;

   for(i=0;i<n;i++)
   {
        cin>>m;
        pos[m]=i;
   }

   for(i=0;i<n;i++)
   {
        cin>>m;
        a[i]=pos[m];
   }


   set<int>x;

   for(i=0;i<n;i++)
   {
        int m=a[i];

        x.insert(m);

        auto d=x.upper_bound(m);

        if(d!=x.end()) x.erase(d);
   }

   cout<<x.size()<<endl;

   get_lost_idiot;
}
