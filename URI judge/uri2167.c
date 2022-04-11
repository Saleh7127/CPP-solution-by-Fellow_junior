#include<stdio.h>
int main()
{

    int x,y,z,i,j,m,arr[677];
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0,j=1; j<x; i++,j++)
    {
        if(arr[i]>arr[j])
        {
            printf("%d\n",j+1);
            return 0;
        }
    }

    printf("0\n");
    return  0;


}
