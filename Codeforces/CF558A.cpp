#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
int main()
{
   vector<pair<ll,ll> >a,c;
   ll n,x,d,e=0,f,i,j,k,l;

   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>x>>d;
       if(x>0)
       {
           a.push_back(make_pair(x,d));
       }
       else
       {
           c.push_back(make_pair(x,d));
       }
   }

   sort(a.begin(),a.end());
   sort(c.begin(),c.end());

   i=0;
   k=a.size();
   l=c.size();
   j=l-1; ///j for neg after sorting last index has highest value;

   while(i<k && j>=0)
   {
       e+=a[i].second + c[j].second;
       ++i,--j;
   }

   if(k>l) e+=a[i].second;

   else if(k<l) e+=c[j].second;

   cout<<e<<endl;
   return 0;
}
