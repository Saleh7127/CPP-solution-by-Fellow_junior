#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[105][105];
char a[105][105];
ll n,m;

bool check(ll i,ll j)
{
    if(i>=0 && i<n && j>=0 && j<m && a[i][j]=='#' && v[i][j]==0) return true;
    return false;
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

    ll i,j,l=0,k;

    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]=='#' && v[i][j]==0)
            {
                l++;
                dfs(i,j);
            }
        }
    }

    cout<<l<<endl;

    return 0;
}
