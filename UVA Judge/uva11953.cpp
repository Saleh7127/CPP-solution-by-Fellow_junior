#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll n,m;
char a[200][200];
bool v[200][200];
bool valid1(ll i,ll j)
{
     if(i<0 || i>=n  || j<0 || j>=n || v[i][j]!=0 || a[i][j]=='.') return 0;
     return 1;
}

void dfs(ll i,ll j)
{
     v[i][j]=1;

     if(valid1(i,j+1)) dfs(i,j+1);
     if(valid1(i,j-1)) dfs(i,j-1);
     if(valid1(i+1,j)) dfs(i+1,j);
     if(valid1(i-1,j)) dfs(i-1,j);
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll i,j,k,l=0;

        cin>>n;

        for(i=0;i<n;i++)
        {
             for(j=0;j<n;j++)
             {
                  cin>>a[i][j];
             }
        }

        memset(v,0,sizeof v);

        for(i=0;i<n;i++)
        {
             for(j=0;j<n;j++)
             {
                  if(a[i][j]=='x' && v[i][j]==0)
                  {
                       l++;
                       dfs(i,j);
                  }
             }
        }

        cout<<"Case "<<cs<<": "<<l<<endl;
   }

   return 0;
}
