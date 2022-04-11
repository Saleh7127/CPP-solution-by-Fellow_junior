#include <bits/stdc++.h>

using namespace std;
#define ll long long
char a[200][200];
bool v[200][200];
ll n,m,ans=0;
bool check(ll i,ll j)
{
    if(i<0 || j<0 || i>=n || j>=n ||  v[i][j]==1 || a[i][j]=='0') return 0;
    return 1;
}

void dfs(ll i,ll j)
{
    v[i][j]=1;

    if(check(i,j+1)) dfs(i,j+1);
    if(check(i,j-1)) dfs(i,j-1);
    if(check(i+1,j)) dfs(i+1,j);
    if(check(i-1,j)) dfs(i-1,j);
    if(check(i+1,j-1)) dfs(i+1,j-1);
    if(check(i-1,j-1)) dfs(i-1,j-1);
    if(check(i+1,j+1)) dfs(i+1,j+1);
    if(check(i-1,j+1)) dfs(i-1,j+1);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll y=1;

    while(cin>>n)
    {
         ll i,j,k,l=0;

         for(i=0;i<n;i++)
         {
              for(j=0;j<n;j++)
              {
                   cin>>a[i][j];
              }
         }

         for(i=0;i<n;i++)
         {
              for(j=0;j<n;j++)
              {
                   if(a[i][j]=='1' && v[i][j]==0)
                   {
                        l++;
                        dfs(i,j);
                   }
              }
         }

         cout<<"Image number "<<y++<<" contains "<<l<<" war eagles."<<endl;

         memset(v,0,sizeof v);
    }

    return 0;
}

