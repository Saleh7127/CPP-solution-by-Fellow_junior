#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   set<string>a;
   string x,y;
   ll n,i,j,k,l;
   cin>>n;
   while(n--)
   {
       cin>>x;
       a.insert(x);
   }
   for(auto d:a)
   {
       if(a.find('!'+d)!=a.end())
       {
           cout<<d<<endl;
           return 0;
       }
   }
   cout<<"satisfiable"<<"\n";
   return 0;
}
