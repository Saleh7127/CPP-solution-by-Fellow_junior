/***
 created: 2021-12-06-17.06.53
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
char a[1005][1005];
ll v[1005][1005];
ll n,m,ans=0;

map<ll,ll>x;


ll solve(ll i,ll j,ll in)
{
     if(i<0 || j<0 || i>=n || j>=m) return 0;

     if(a[i][j]=='*') return 1;

     if(v[i][j]) return 0;

     v[i][j]=in;

     return solve(i,j+1,in)+solve(i,j-1,in) + solve(i+1,j,in)+solve(i-1,j,in);

}



int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l,q;

   cin>>n>>m>>q;

   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
             cin>>a[i][j];
        }
   }

   for(i=1;i<=q;i++)
   {
        cin>>j>>k;

        ans=0;

        j--,k--;

        if(v[j][k]) ans=x[v[j][k]];
        else
        {
             ans=solve(j,k,i);
             x[i]=ans;
        }

        cout<<ans<<nl;
   }



   get_lost_idiot;
}
