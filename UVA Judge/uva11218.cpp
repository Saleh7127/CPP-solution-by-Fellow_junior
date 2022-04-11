#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int ans=-1;
bool t1[1000];
int n,a[100],b[100],c[100],s[100];

void dfs(int ind,int z,int r)
{
    if(z==3)
    {
        ans=max(ans,r);
        return;
    }
    if(ind==n) return;

    dfs(ind+1,z,r);


    if(t1[a[ind]]==0 && t1[b[ind]]==0 && t1[c[ind]]==0)
    {
        t1[a[ind]]=1;
        t1[b[ind]]=1;
        t1[c[ind]]=1;
        dfs(ind+1,z+1,r+s[ind]);
        t1[a[ind]]=0;
        t1[b[ind]]=0;
        t1[c[ind]]=0;
    }

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int x=1;

   while(cin>>n && n)
   {

       for(int i=0;i<n;i++)
       {
           cin>>a[i]>>b[i]>>c[i]>>s[i];
       }

       ans=-1;

       dfs(0,0,0);

       cout<<"Case "<<x++<<": "<<ans<<endl;

       for(int i=0;i<20;i++)
       {
           t1[i]=0;
       }
   }


   return 0;
}
