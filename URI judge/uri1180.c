#include<stdio.h>
int main ()
{
    int a[1000];
    int n,i,l,p;

    scanf("%d",&n);

    l=a[0];
    p=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(l>a[i])
        {
            l=a[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",l,p);
    return 0;
}
