#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[200005];
set<ll>x;

void add(ll c,ll d)
{
     if(c>d) swap(c,d);

     a[c]++;

     x.insert(c);
}

void dlt(ll c,ll d)
{
     if(c>d) swap(c,d);

     a[c]--;

     if(a[c]==0) x.erase(c);
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k,l,c,d,e;

   cin>>n>>m;

   while(m--)
   {
        cin>>c>>d;

        add(c,d);
   }

   cin>>m;

   while(m--)
   {
        cin>>k;

        if(k==1)
        {
             cin>>c>>d;
             add(c,d);
        }
        else if(k==2)
        {
             cin>>c>>d;
             dlt(c,d);
        }
        else
        {
             cout<<n-x.size()<<endl;
        }
   }


   return 0;
}

