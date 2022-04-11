#include<stdio.h>
int main()
{
    int a,i,b;
    char ar[10];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s %d",&ar,&b);
        if(ar[0]=='T' && ar[1]=='h' && ar[2]=='o') printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
