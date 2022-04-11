#include<stdio.h>
int main()
{
    int a,i,A=0,D=0;
    char c[100100];
    scanf("%d",&a);
    scanf("%s",&c);
    for(i=0; i<a; i++)
    {
        if(c[i]=='A')
            A++;
        if(c[i]=='D')
            D++;
    }
    if(A>D)
        printf("Anton\n");
    if(D>A)
        printf("Danik\n");
    if(A==D)
        printf("Friendship\n");

    return 0;
}
