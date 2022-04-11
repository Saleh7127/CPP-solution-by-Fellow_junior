#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool visit[100005];
vector<ll>xx[100005];

void check(ll ind)
{
    if(visit[ind]==1) return;
    visit[ind]=1;

    for(ll i=0;i<xx[ind].size();i++)
    {
        ll nx=xx[ind][i];
        if(visit[nx]==0)
        {
            check(nx);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll a,c,d,e,i,j,k,l;

   cin>>c>>a;
   for(i=1;i<c;i++)
   {
       cin>>d;
       xx[i].push_back(i+d);
   }

   check(1);

   if(visit[a]==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   return 0;
}
