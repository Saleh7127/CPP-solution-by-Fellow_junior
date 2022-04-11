#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f= (a*b)+(2*d);
    g= (a*c)+(2*e);
    if(f<g)
        printf("First\n");
    else if(g<f)
        printf("Second\n");
    else if(f==g)
        printf("Friendship\n");


    return 0;

}
