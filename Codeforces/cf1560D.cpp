#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
vector<string>x;

ll sol(string b,string a)
{
     ll i,j,k;

     for(i=0,j=0;i<b.size() && j<a.size();j++)
     {
          if(b[i]==a[j]) i++;
     }

     return a.size()- 2*i +b.size();
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l;

   for(i=0;i<63;i++)
   {
        x.push_back(to_string(1ll<<i));
   }

   test
   {
       string a;

       cin>>a;

       l=1e12;

       for(auto d:x)
       {
            l=min(sol(d,a),l);
       }

       cout<<l<<endl;
   }

   return 0;
}
