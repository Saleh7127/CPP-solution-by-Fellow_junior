#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e= a+c+d;
    if(b>e) printf("Igor feliz!\n");
    else
    {
        if(c>(d/2)) printf("Caio, a culpa eh sua!\n");

        else printf("Igor bolado!\n");
    }
    return 0;
}
