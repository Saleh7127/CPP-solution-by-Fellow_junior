#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool v[100][100];
char a[100][100];
ll n,m,cnt=0;

bool valid(ll i,ll j)
{
     if(i<0 || i>=n  || j<0 || j>=m || v[i][j]!=0 || a[i][j]!='X') return 0;
     return 1;
}

void dicecheck(ll i,ll j)
{
     v[i][j]=1;

     if(valid(i,j+1)) dicecheck(i,j+1);
     if(valid(i,j-1)) dicecheck(i,j-1);
     if(valid(i+1,j)) dicecheck(i+1,j);
     if(valid(i-1,j)) dicecheck(i-1,j);

}

bool valid1(ll i,ll j)
{
     if(i<0 || i>=n  || j<0 || j>=m || v[i][j]!=0 || a[i][j]=='.') return 0;
     return 1;
}

void dfs(ll i,ll j)
{

     v[i][j]=1;

     if(a[i][j]=='X')
     {
          cnt++;
          dicecheck(i,j);
     }

     if(valid1(i,j+1)) dfs(i,j+1);
     if(valid1(i,j-1)) dfs(i,j-1);
     if(valid1(i+1,j)) dfs(i+1,j);
     if(valid1(i-1,j)) dfs(i-1,j);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l,tt=0;

   while(cin>>n>>m)
   {
        if(n==0 || m==0) break;

        swap(n,m);

        memset(v,0,sizeof v);

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  cin>>a[i][j];
             }
        }

        vector<ll>x;

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  if(a[i][j]!='.' && v[i][j]==0)
                  {
                       cnt=0;

                       dfs(i,j);

                       if(cnt>=1 && cnt<=6) x.push_back(cnt);
                  }
             }
        }

        cout<<"Throw "<<++tt<<endl;

        sort(x.begin(),x.end());

        for(i=0;i<x.size();i++)
        {
             cout<<x[i];
             if(i!=x.size()-1) cout<<" ";
        }

        cout<<endl<<endl;

   }

   return 0;
}
