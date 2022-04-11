#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

string a[500000];

bool cmp(string a,string b)
{
     for(ll i=0;i<a.size();i++)
     {
          if(a[i]==b[i]) continue;
          if(i%2==0)
          {
               if(a[i]<b[i]) return 1;
               else return 0;
          }
          else if(i%2==1)
          {
               if(a[i]>b[i]) return 1;
               else return 0;
          }
     }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;


   string x;

   map<string,ll>y;

   cin>>n>>m;

   for(i=0;i<n;i++)
   {
        cin>>a[i];
        y[a[i]]=i+1;
   }

   sort(a,a+n,cmp);

   for(i=0;i<n;i++)
   {
        cout<<y[a[i]]<<" ";
   }
   cout<<endl;

   return 0;
}
