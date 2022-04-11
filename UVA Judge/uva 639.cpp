#include <bits/stdc++.h>
using namespace std;
int n;
int xx[5][5];
bool valid(int x,int y)
{
    bool s=true;
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(i==x) continue;
        if(xx[i][y]==2)
        {
            s=s&false;
            break;
        }
        if(xx[i][y]==1)
        {
            s=s&true;
            break;
        }
    }
    for(j=1;j<=n;j++)
    {
        if(j==y) continue;
        if(xx[x][j]==2)
        {
            s=s&false;
            break;
        }
        if(xx[x][j]==1)
        {
            s=s&true;
            break;
        }
    }
    return s;
}

int backtrack()
{
    int maxx=0,ans,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(xx[i][j]==0 && valid(i,j))
            {
                xx[i][j]=2;
                ans=1+backtrack();
                maxx=max(maxx,ans);
                xx[i][j]=0;
            }
        }
    }
    return maxx;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   char ss;
   int i,j;
   while(cin>>n && n)
   {

       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               cin>>ss;
               if(ss=='.') xx[i][j]=0;
               else xx[i][j]=1;
           }
       }
       cout<<backtrack()<<endl;
   }

   return 0;
}
