/***
 created: 2021-12-07-15.25.42
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

string a[100005];

bool cmp(string a,string b)
{
     return (a+b) <(b+a);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   cin>>n;

   for(i=1;i<=n;i++)
   {
        cin>>a[i];
   }

   sort(a+1,a+n+1,cmp);


   for(i=1;i<=n;i++)
   {
        cout<<a[i];
   }

   cout<<nl;

   get_lost_idiot;
}
