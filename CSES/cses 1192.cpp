#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll n,m;
bool seen[1005][1005];
vector<pair<int,int>> moves = {{-1,0},{1,0},{0,-1},{0,1}};

bool right(ll i,ll j)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    if(seen[i][j]==1)
    {
        return false;
    }
    return true;
}

void dfs(ll i,ll j)
{
    seen[i][j]=1;
    for(auto p: moves)
	{
		if(right(i+p.first,j+p.second))
		{
			dfs(i+p.first, j+p.second);
		}
	}
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,c=0;
   cin>>n>>m;
   char x;

   memset(seen,0,sizeof(seen));

   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cin>>x;
           if(x=='#')
           {
               seen[i][j]=1;
           }
       }
   }

   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(seen[i][j]==0)
           {
               dfs(i,j);
               c++;
           }
       }
   }
   cout<<c<<endl;
   return 0;
}
