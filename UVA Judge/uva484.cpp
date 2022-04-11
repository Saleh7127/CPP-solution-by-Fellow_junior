#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll d,i,j,k,l;
   vector<ll>a;
   map<ll,ll>c;

   while(cin>>d && d)
   {
       if(c[d]==0)
       {
           a.push_back(d);
           c[d]=1;
       }
       else
       {
           c[d]++;
       }
   }
   for(i=0;i<a.size();i++)
   {
       cout<<a[i]<<" "<<c[a[i]]<<endl;
   }

   return 0;
}
