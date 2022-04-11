#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],c,d,e,f,i,j,k,l;
    scanf("%d %d",&c,&d);
    for(i=0; i<c; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<d; j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0; k<c; k++)
    {
        for(l=0; l<d; l++)
        {
            if(a[k]==b[l])
            {
                printf("%d ",a[k]);
            }
        }
    }
    printf("\n");

    return 0;
}
