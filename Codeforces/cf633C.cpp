/***
 created: 2022-01-29-09.38.25
***/

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

unordered_map<ll,string>x;
ll dp[100005];

ll hashing(string a)
{
     ll ans=0,p=1;

     for(char c:a)
     {
          c=tolower(c);
          ans=ans+(c)*p;
          p*=149;
     }

     return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   int n,m,i,j,k,l;

   string a,b;

   cin>>n>>a>>m;

   for(i=0;i<m;i++)
   {
        cin>>b;
        x[hashing(b)]=b;
   }


   for(i=0;i<n;i++)
   {
        ll h1=0,p=1;
        dp[i]=-1;

        for(j=i;j>=0;j--)
        {
             h1=h1+a[j]*p;
             p*=149;

             if((j==0 || dp[j-1]!=-1) && x.count(h1))
             {
                  dp[i]=h1;
                  break;
             }
        }
   }

   vector<string>ans;

   l=n-1;

   while(l>=0)
   {
        b=x[dp[l]];
        ans.push_back(b);
        l-=b.size();
   }

   for(i=ans.size()-1;i>=0;i--)
   {
        if(ans[i].size()) cout<<ans[i]<<" ";
   }

   cout<<nl;

   get_lost_idiot;
}
