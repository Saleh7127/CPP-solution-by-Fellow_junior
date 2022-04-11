#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c[10000],i,j=0,k=0,l;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);

    }
    sort(c,c+a);
    for(i=0;i<a;i++)
    {
        if(j==b)
        {
            break;
        }
        if(c[i]<0)
        {
            k+=c[i];
            j++;
        }
    }
    printf("%d\n",(-1*k));
    return 0;
}
