#include<stdio.h>
int main()
{
    int a,i=0;
    for( ; ; )
    {
        scanf("%d",&a);
        if(a==-1) break;

        printf("Experiment %d: %d full cycle(s)\n",++i,a/2);

    }
    return 0;
}
