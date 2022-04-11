#include<stdio.h>
int a[100007],f[100007]= {0};
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
        f[ a[i] ]++;
    }
    for(i=0; i<100007; ++i)
    {
        if(f[i]!=0)
        {
            printf("%d aparece %d vez(es)\n",i,f[i]);
        }
    }
    return 0;
}
