#include<stdio.h>
int main()
{
    int a,b,c,d,t,m;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    t=c-a;
    if(t<0)
    {
        t=24+(c-a);
    }
    m=d-b;
    if(m<0)
    {
        m=60+(d-b);
        t--;
    }

    if(a==c && b==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,m);
    }

    return 0;
}
