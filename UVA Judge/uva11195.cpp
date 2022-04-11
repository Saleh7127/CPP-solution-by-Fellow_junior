#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
char a[100][100];
ll cc[100],rec[100],dia[100];
ll n,ans=0;

void dfs(ll r)
{
    if(r==n)
    {
        ans++;
        return;
    }
    for(ll i=0;i<n;i++)
    {
        if(cc[i]==0 && rec[r+i]==0 && dia[(n-1+r-i)]==0 && a[r][i]=='.')
        {
            cc[i]=rec[r+i]=dia[(n-1+r-i)]=1;
            dfs(r+1);
            cc[i]=rec[r+i]=dia[(n-1+r-i)]=0;
        }
    }
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll o=1,i,j;

   while(cin>>n && n)
   {
       char x;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>a[i][j];
           }
       }
       dfs(0);

       cout<<"Case "<<o++<<": "<<ans<<endl;
       ans=0;

       memset(a,0,sizeof(a));
       memset(cc,0,sizeof(cc));
       memset(rec,0,sizeof(rec));
       memset(dia,0,sizeof(dia));

   }


   return 0;
}
