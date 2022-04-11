#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
vector<pair<ll,ll>>x;
bool check(ll ind,ll ans)
{
    ll i=ind+1;
    ll j=x.size()-1;

    while(i<j)
    {
        ll xx=x[i].first+x[j].first;

        if(xx==ans)
        {
            cout<<x[i].second<<" "<<x[j].second<<" "<<x[ind].second<<endl;
            return 1;
        }
        if(xx<ans) i++;
        if(xx>ans) j--;
    }
    return 0;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l;

   cin>>n>>m;

   for(i=1;i<=n;i++)
   {
       cin>>k;
       x.push_back({k,i});
   }

   sort(x.begin(),x.end());

   for(i=0;i<n;i++)
   {
       k=m-x[i].first;
       if(check(i,k))
       {
           return 0;
       }
   }

   cout<<"IMPOSSIBLE"<<endl;

   return 0;
}
