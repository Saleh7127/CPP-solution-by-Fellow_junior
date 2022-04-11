#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   string a,b="",c="",d="";

   cin>>n>>m>>a;

   for(i=0;i<a.size();i++)
   {
        b+=a[i];
        d=b;

        while(d.size()<m)
        {
             d+=d;
        }
        while(d.size()>m)
        {
             d.pop_back();
        }

        if(i>0) c=min(c,d);
        else c=d;
        d.clear();
   }

   cout<<c<<endl;

   return 0;
}

