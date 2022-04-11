#include<stdio.h>
int main()
{

    int i,j,a;
    double ar[12][12],sum=0.0;
    char B[2];
    scanf("%d %s",&a,&B);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {

            scanf("%lf",&ar[i][j]);
        }
    }
    for(i=0; i<12; i++)
    {
        sum += ar[i][a];
    }
    if(B[0]=='S')
        printf("%.1lf\n",sum);
    else if(B[1]='M')
        printf("%.1lf\n",sum/12.0);


    return 0;
}

