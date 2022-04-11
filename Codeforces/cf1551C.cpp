#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
string a[200005];

ll solve(char c,ll n)
{
     ll i,j=0,k=0,l;

     vector<ll>x;

     for(i=0;i<n;i++)
     {
          l=0;
          for(auto dd:a[i])
          {
               if(dd==c) l++;
               else l--;
          }
          x.push_back(l);
     }

     sort(x.rbegin(),x.rend());

     for(auto d:x)
     {
          if(j+d<=0)
          {
               return k;
          }
          k++;
          j+=d;
     }
     return k;

}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        ll n,m,i,j,k,l=0;

        cin>>n;

        for(i=0;i<n;i++) cin>>a[i];

        for(char c='a';c<='e';c++)
        {
             l=max(l,solve(c,n));
        }

        cout<<l<<endl;
   }

   return 0;
}
