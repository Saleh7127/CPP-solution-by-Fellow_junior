#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e=0,i,j,k,l;
    scanf("%d",&b);
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&d);
    for(k=c;k<c+d;k++)
    {
        scanf("%d",&a[k]);
    }
    sort(a,a+(c+d));
    for(j=0;j<c+d;j++)
    {
        if(a[j]!=a[j+1])
        {
            e++;
        }
    }
    if(e==b) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");

    return 0;

}
