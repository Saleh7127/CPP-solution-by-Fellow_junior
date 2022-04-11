#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[1000],c,d,e=0,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    c= b[0];
    d= b[0];
    for(i=0;i<a;i++)
    {
        if(b[i]>c)
        {
            c=b[i];
            e++;
        }
         if(b[i]<d)
        {
            d=b[i];
            e++;
        }
    }
    printf("%d",e);

    return 0;
}
