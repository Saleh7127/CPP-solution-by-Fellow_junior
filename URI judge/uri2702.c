#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g=0,n,m,l;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a<d) g+=d-a;
    if(b<e) g+=e-b;
    if(c<f) g+=f-c;

    printf("%d\n",g);
    return 0;
}
