#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll n,m,cnt;
char a[200][200],c;
bool v[200][200];

ll chk(ll j)
{
     if(j<0ll) return m-1;
     else if(j>=m) return 0ll;
     else return j;
}

void floodfill(ll i,ll j)
{
     j=chk(j);

     if(i<0 || i>=n || v[i][j] || a[i][j]!=c) return;

     v[i][j]=1;
     cnt++;

     floodfill(i,j+1);
     floodfill(i,j-1);
     floodfill(i+1,j);
     floodfill(i-1,j);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   while(cin>>n>>m)
   {
        ll i,j,k,l;

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  cin>>a[i][j];
             }
        }

        cin>>i>>j;

        c=a[i][j];

        memset(v,0,sizeof v);

        floodfill(i,j);

        l=0;

        for(i=0;i<n;i++)
        {
             for(j=0;j<m;j++)
             {
                  cnt=0;
                  floodfill(i,j);
                  l=max(l,cnt);
             }
        }

        cout<<l<<endl;

   }

   return 0;
}
