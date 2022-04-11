#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool v[505][505];
string a[205],b;

ll n=0,m=0,ans=0;
ll dx[]={-1,-1,-1,0,0,1,1,1};
ll dy[]={1,0,-1,1,-1,1,0,-1};
bool check(ll i,ll j)
{
    if(i<0 || j<0 || i>=n || j>=m || a[i][j]=='L' || v[i][j]!=0) return 0;
    return 1;
}

void dfs(ll i,ll j)
{
    v[i][j]=1;
    ans++;
    for(ll k=0;k<8;k++)
    {
         ll ww=i+dx[k];
         ll ee=j+dy[k];
         if(check(ww,ee))
         {
              dfs(ww,ee);
         }
    }

}

int main()
{


    int tt,j,k,l;

    scanf("%d",&tt);
    getchar();
    getchar();

    while(tt--)
    {
         n=m=0;

         while(getline(cin,b) && b.size()>0)
         {
              if(b.size()==0) break;

              else if(b[0]!='W' && b[0]!='L')
              {
                   istringstream cinn(b);
                   cinn>>k;
                   cinn>>l;

                   memset(v,0,sizeof v);
                   ans=0;
                   dfs(k-1,l-1);
                   cout<<ans<<endl;
              }
              else
              {
                   if(m==0) m=b.size();
                   a[n]=b;
                   n++;
              }
         }
         if(tt) printf("\n");
    }

    return 0;
}
