#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
stack<char>ans;
vector<char>g[20000];
bool v[20000];
map<char,ll>x;

void dfs(char c)
{
     if(v[c]) return;

     v[c]=1;

     for(auto dd:g[c])
     {
          if(v[dd]==0)
          {
               dfs(dd);
          }
     }

     ans.push(c);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,b;
   ll i,j,k,l;

   cin>>a;

   while(cin>>b)
   {
        if(b=="#") break;

        for(i=0;i<min(a.size(),b.size());i++)
        {
             if(a[i]!=b[i])
             {
                  x[a[i]]=1;
                  x[v[i]]=1;
                  g[a[i]].push_back(b[i]);
                  break;
             }
        }
        a=b;
   }

   for(char s='A';s<='Z';s++)
   {
        if(v[s]==0 && x[s]==1)
        {
             dfs(s);
        }
   }

   while(ans.empty()==false)
   {
        cout<<ans.top();
        ans.pop();
   }
   cout<<endl;

   return 0;
}
