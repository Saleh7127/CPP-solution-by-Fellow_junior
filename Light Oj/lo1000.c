#include<stdio.h>
main()
{
    int i,j,k;
    for(i=2;i<=100;i++)
    {
        k=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            k++;
        }
        if(k==1)
        printf("%d\t",i);
    }
}
