#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d=0,e=0,f,i,j,k,l;
    scanf("%d %d",&b,&c);
    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<b;i++)
     {
         if(5-a[i]>=c)
         {
             d++;
         }
     }
     e= d/3;
     printf("%d\n",e);

     return 0;
}
