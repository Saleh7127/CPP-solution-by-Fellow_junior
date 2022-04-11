#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
//#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll f[30];

string a[200000],b[200000];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll t,n,m,i,j,k,l;

   cin>>t;

   while(t--)
   {
        cin>>n>>m;

        cin.ignore();
        memset(f,0,sizeof f);

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<n-1;i++) cin>>b[i];

        for(i=0;i<m;i++)
        {
             memset(f,0,sizeof f);

             for(j=0;j<n;j++) f[a[j][i]-'a']++;
             for(j=0;j<n-1;j++) f[b[j][i]-'a']--;


             for(j=0;j<26;j++)
             {
                  if(f[j]!=0)
                  {
                       char ss='a'+j;
                       cout<<ss;
                       break;
                  }
             }
        }
        cout<<endl;
   }

   return 0;
}
