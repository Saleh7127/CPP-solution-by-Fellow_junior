#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);

        for(j=0; j<b; j++)
        {
            scanf("%d",&c);
            if(c==1)
                printf("Rolien\n");
            if(c==2)
                printf("Naej\n");
            if(c==3)
                printf("Elehcim\n");
            if(c==4)
                printf("Odranoel\n");
        }
    }


    return 0;
}
