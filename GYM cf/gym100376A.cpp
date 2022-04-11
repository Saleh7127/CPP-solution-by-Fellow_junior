#include <bits/stdc++.h>
using namespace std;
int n,a[20000],i,j,k;
int main()
{

     scanf("%d",&n);

     k=0;

     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);

     }

     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               if(a[i]<a[j] && i>j)
               {
                    k++;
               }
          }
     }

     printf("%d\n", k);


   return 0;
}
