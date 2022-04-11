#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll a[1003][1003],n,m,c;
bool v[1003][1003];
void dfs(ll i,ll j)
{
     if(i<0 || i>=n || j<0 || j>=m || v[i][j]!=0) return;
     v[i][j]=1;
     c++;

     bitset<4> bit=a[i][j];

     if(bit[3]==0) dfs(i-1,j);
     if(bit[2]==0) dfs(i,j+1);
     if(bit[1]==0) dfs(i+1,j);
     if(bit[0]==0) dfs(i,j-1);

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,l;

   cin>>n>>m;

   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
             cin>>a[i][j];
        }
   }

   vector<ll>ans;

   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
             if(!v[i][j])
             {
                  c=0;
                  dfs(i,j);
                  ans.push_back(c);
             }
        }
   }

   sort(ans.begin(),ans.end(),greater<int>());


   for(auto d:ans)
   {
        cout<<d<<" ";
   }
   cout<<endl;

   return 0;
}
