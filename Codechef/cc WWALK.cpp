#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int a[100005],c[100005],d,e=0,f=0,g=0;
      scanf("%d",&d);
      for(int i=0;i<d;i++)
      {
          scanf("%d",&a[i]);
      }
      for(int i=0;i<d;i++)
      {
          scanf("%d",&c[i]);
      }
      for(int j=0;j<d;j++)
      {
          e+=a[j];
          f+=c[j];
          if(a[j]==c[j] && e==f)
          {
              g+=c[j];

          }
      }
      printf("%d\n",g);
   }
   return 0;
}

