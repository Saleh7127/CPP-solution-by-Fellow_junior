#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ans[50]={0},in=8,r,c,n,sln,t;
int valid(int x,int y)
{

    if(r==x || c==y || (abs(r-x)==abs(c-y)))
    {
        return 0;
    }
    for(int i=1;i<y;i++)
    {
        if(ans[i]==x || (abs(x-ans[i])==abs(i-y)))
        {
            return 0;
        }
    }
    return 1;
}


void backtrack(int x)
{
    if(x==9)
    {
        int i=0;
        sln++;
        printf("%2d      ",sln);
        for(i=1;i<8;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("%d\n",ans[i]);
        return ;
    }
    if(x==c)
    {
        backtrack(x+1);
        return ;
    }
    for(int i=1;i<=8;i++)
    {
        if(valid(i,x))
        {
            ans[x]=i;
            backtrack(x+1);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   scanf("%d",&t);

   for(int i=1;i<=t;i++)
   {
       scanf("%d %d",&r,&c);
       ans[c]=r;
       sln=0;
       printf("SOLN       COLUMN\n");
       printf(" #      1 2 3 4 5 6 7 8\n\n");

       backtrack(1);
       if(i<t) printf("\n");
   }

   return 0;
}
