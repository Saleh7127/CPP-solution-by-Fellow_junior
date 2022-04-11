/***
 created: 2022-02-16-15.40.59
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
string a,b;
vector<string>x,y;
ll dp[1005][1005];

ll solve(ll i,ll j)
{
     if(i>=x.size() || j>=y.size()) return 0;

     if(dp[i][j]!=-1) return dp[i][j];

     ll ans=0;

     if(x[i]==y[j])
     {
          ans=max(ans,1+solve(i+1,j+1));
     }
     else
     {
          ans=max(ans,solve(i,j+1));
          ans=max(ans,solve(i+1,j));
     }

     return dp[i][j]=ans;


}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll cs=1;

   while(getline(cin,a))
   {
        if(a=="#") break;

        getline(cin,b);

        x.clear(),y.clear();
        memset(dp,-1,sizeof dp);

        for(ll i=0;i<a.size();i++)
        {
             if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
             {
                  continue;
             }
             else
             {
                  a[i]=' ';
             }
        }

        for(ll i=0;i<b.size();i++)
        {
             if((b[i]>='a' && b[i]<='z') || (b[i]>='A' && b[i]<='Z') || (b[i]>='0' && b[i]<='9'))
             {
                  continue;
             }
             else
             {
                  b[i]=' ';
             }
        }

        string c;

        istringstream ss(a);

        while(ss>>c)
        {
             x.push_back(c);
        }

        istringstream sss(b);

        while(sss>>c)
        {
             y.push_back(c);
        }

        cout.width(2);
        cout<<cs++<<". ";

        if(x.size()==0 || y.size()==0) cout<<"Blank!"<<nl;

        else cout<<"Length of longest match: "<<solve(0,0)<<nl;
   }

   get_lost_idiot;
}

