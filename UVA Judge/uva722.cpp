#include <bits/stdc++.h>

using namespace std;
#define ll long long
string a[200],b;
bool v[200][200];
ll n,m,ans=0;

bool check(ll i,ll j)
{
    if(i<0 || j<0 || i>=n || j>=m ||  v[i][j]==1 || a[i][j]=='1') return 0;
    return 1;
}

void dfs(ll i,ll j)
{
    v[i][j]=1;
    ans++;

    if(check(i,j+1)) dfs(i,j+1);
    if(check(i,j-1)) dfs(i,j-1);
    if(check(i+1,j)) dfs(i+1,j);
    if(check(i-1,j)) dfs(i-1,j);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    int t;
    cin>>t;

    getline(cin,b);
    getline(cin,b);

    for(int cs=1; cs<=t; cs++)
    {

        ll i,j,k,l;

        n=m=0;

        cin>>i>>j;

        getline(cin,b);

        while(getline(cin,b))
        {
             if(b.size()==0) break;
             a[n++]=b;
        }

        m=a[0].size();

        dfs(i-1,j-1);

        cout<<ans<<endl;

        if(cs<t) cout<<endl;

        memset(v,0,sizeof v);
        ans=0;

    }

    return 0;
}
