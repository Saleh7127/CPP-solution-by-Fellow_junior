#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       set<ll>x;
       set<ll>::iterator it;

       ll n,a[100005],b,c,d,e,f,i,j,k,l;
       cin>>n;

       for(i=0;i<n;i++)
       {
           cin>>b;
           a[b]=i;
       }
       for(i=0;i<n;i++)
       {
           cin>>b;
           x.insert(a[b]);
           it=x.find(a[b]);
           it++;
           if(it!=x.end())
           {
               x.erase(it);
           }
       }
       cout<<x.size()<<endl;
   }




   return 0;
}
