#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
bool visit[10][10];
char a[10][10];
bool check(ll r,ll c,char x)
{
    ll i,j;
    for(i=0;i<4;i++)
    {
        if(a[i][c]==x) return 0;
    }
    for(i=0;i<4;i++)
    {
        if(a[r][i]==x) return 0;
    }
    if((r==0 || r==1) && (c==0 || c==1) && (a[0][0]==x || a[0][1]==x || a[1][0]==x || a[1][1]==x))
    {
        return 0;
    }
    else if((r==0 || r==1) && (c==2 || c==3) && (a[0][2]==x || a[0][3]==x || a[1][2]==x || a[1][3]==x))
    {
        return 0;
    }
    else if((r==2 || r==3) && (c==0 || c==1) && (a[2][1]==x || a[2][0]==x || a[3][0]==x || a[3][1]==x))
    {
        return 0;
    }
    else if((r==2 || r==3) && (c==2 || c==3) && (a[2][2]==x || a[2][3]==x || a[3][2]==x || a[3][3]==x))
    {
        return 0;
    }
    else return 1;
}

void dfs(ll r, ll c)
{
    if(r==3 && c==(r+1))
    {
        for(ll i=0;i<4;i++)
        {
            for(ll j=0;j<4;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        return ;
    }
    if(r>=4) return;

    if(c>=4)
    {
        r++;
        c=0;
    }
    if(a[r][c]!='*')
    {
        dfs(r,c+1);
    }
    for(char z='1';z<='4';z++)
    {
        if(check(r,c,z)==1 && visit[r][c]==0 && a[r][c]=='*')
        {
            visit[r][c]=1;
            a[r][c]=z;
            dfs(r,c+1);
            visit[r][c]=0;
            a[r][c]='*';
        }
    }

}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       memset(visit,0,sizeof(visit));
       a[10][10]='\0';
       string dd;
       getline(cin,dd);
       for(ll i=0;i<4;i++)
       {
           for(ll j=0;j<4;j++)
           {
               cin>>a[i][j];
           }
       }
       cout<<"Case #"<<cs<<":"<<endl;
       dfs(0,0);
   }

   return 0;
}
