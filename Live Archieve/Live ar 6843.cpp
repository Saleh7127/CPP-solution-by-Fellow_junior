#include <bits/stdc++.h>
using namespace std;
int dp[30005];
bitset<900000005>v;

int main()
{

   int n,m,i,j,k,l=0;

   for(i=0;i<=30000;i++)
   {
        for(j=0;j<=i;j++)
        {
             if(v[i*j]==0)
             {
                  l++;
                  v[i*j]=1;
             }
        }
        dp[i]=l;
   }

   scanf("%d",&m);
   while(m--)
   {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
   }

   return 0;
}
