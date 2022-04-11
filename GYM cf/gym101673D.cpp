#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l=0;
   vector<ll>x;
   string a;

   cin>>n>>m;

   for(i=0;i<m;i++)
   {
        cin>>a;
        if(a=="undo")
        {
             cin>>k;
             if(x.size()>0)
             {
                  for(j=0;j<k;j++)
                  {
                       x.pop_back();
                  }
             }
        }
        else
        {
             k=stoi(a);
             x.push_back(k);
        }
   }


   for(i=0;i<x.size();i++)
   {
        l+=x[i];
        l%=n;
   }
   l+=n;
   l%=n;

   cout<<l<<endl;
   return 0;
}
