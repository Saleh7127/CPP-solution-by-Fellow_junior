#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d:%d",&a,&b)!=EOF)
    {
        c=(a*60)+b;
        if(c>=420)
            printf("Atraso maximo: %d\n",c-420);
        if(c<420) printf("Atraso maximo: 0\n");
    }

    return 0;
}
