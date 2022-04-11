#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

stringstream ss;

string name[2000],nam;

ll b[1000],cd,d[1000];
ll l[100][20],u[100][20];
ll c[100][20];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k;

   string s;

   while(cin>>n>>m)
   {
        for(i=1;i<=n;i++)
        {
             cin>>name[i]>>b[i]>>cd>>d[i];

             for(j=1;j<=d[i];j++)
             {
                  cin>>l[i][j]>>u[i][j];
             }

             c[i][d[i]]=cd;

             for(ll dd=d[i]-1;dd>0;dd--)
             {
                  c[i][dd]=c[i][dd+1]*(u[i][dd+1]-l[i][dd+1]+1);
             }

             c[i][0]=b[i];

             for(j=1;j<=d[i];j++)
             {
                  c[i][0]-=c[i][j]*l[i][j];
             }
        }

        cin.ignore();

        while(m--)
        {
             vector<ll>x;

             ll q,ans=0;

             getline(cin,s);

             ss.clear();

             ss.str(s);

             ss>>nam;

             while(ss>>q)
             {
                  x.push_back(q);
             }

             for(j=1;j<=n;j++)
             {
                  if(name[j]==nam)
                  {
                       ans=c[j][0];

                       for(k=1;k<=x.size();k++)
                       {
                            ans+=(c[j][k]*x[k-1]);
                       }
                  }
             }

             cout<<nam<<"[";

             for(k=0;k<x.size();k++)
             {
                  if(k!=0) cout<<", ";

                  cout<<x[k];
             }

             cout<<"] = "<<ans<<endl;
        }


   }


   return 0;
}
