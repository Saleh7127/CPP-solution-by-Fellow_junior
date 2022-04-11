#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[10];
ll a[10];
ll ans;

void dfs(ll c,ll s)
{
    if(s==23 && c==4)
    {
        ans=1;
        return;
    }
    for(ll i=0;i<5;i++)
    {
        if(v[i]==0)
        {
            v[i]=1;
            dfs(c+1,s+a[i]);
            dfs(c+1,s-a[i]);
            dfs(c+1,s*a[i]);
            v[i]=0;
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n=5,m=0,i,j,k,l;

   while(1)
   {
       m=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           m+=a[i];
       }
       if(m==0) break;

       for(i=0;i<5;i++)
       {
           v[i]=1;
           dfs(0,a[i]);
           v[i]=0;
       }
       if(ans) cout<<"Possible"<<endl;
       else cout<<"Impossible"<<endl;

       ans=0;
       memset(v,0,sizeof(v));

   }


   return 0;
}
