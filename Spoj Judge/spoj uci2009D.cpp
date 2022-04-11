#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
char a[10][10];
ll n;
bool v[100][100];
set<vector<pair<ll,ll>>>ans;
ll dx[]={1,-1,0,0};
ll dy[]={0,0,-1,1};

bool valid(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=n || a[x][y]=='.' || v[x][y]==1) return 0;
    else return 1;
}

void dfs(ll r,ll c,ll cnt,vector<pair<ll,ll>>s)
{
    if(valid(r,c)==0) return;

    v[r][c]=1;

    s.push_back({r,c});

    if(cnt==7)
    {
        v[r][c]=0;
        sort(s.begin(),s.end());
        ans.insert(s);
        return;
    }

    for(ll i=0;i<4;i++)
    {
        ll x=r+dx[i];
        ll y=c+dy[i];
        dfs(x,y,cnt+1,s);
    }

    v[r][c]=0;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
       ll i,j,k,l;
       cin>>n;

       memset(v,0,sizeof(v));
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>a[i][j];
           }
       }
       ans.clear();
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               if(a[i][j]=='X')
               {
                   vector<pair<ll,ll>>bb;
                   dfs(i,j,0,bb);
               }
           }
       }

       cout<<ans.size()<<endl;

   }

   return 0;
}

