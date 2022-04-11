#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    g = (a*3)+(b*1);
    h = (d*3)+(e*1);
    if(g==h)
    {
        g=g+c;
        h=h+f;
    }
    if(g>h) printf("C\n");
    else if(g<h)  printf("F\n");\
        else if(g==h)  printf("=\n");

    return 0;
}
