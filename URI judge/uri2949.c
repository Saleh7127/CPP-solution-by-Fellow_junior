#include<stdio.h>
int main()
{
    int b,i,j,k,x=0,a=0,e=0,h=0,m=0;
    char c,ch[1000];
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%s %c",ch,&c);
        if(c=='X') x++;
        else if(c=='A') a++;
        else if(c=='E') e++;
        else if(c=='H') h++;
        else if(c=='M') m++;
    }
    printf("%d Hobbit(s)\n",x);
    printf("%d Humano(s)\n",h);
    printf("%d Elfo(s)\n",e);
    printf("%d Anao(s)\n",a);
    printf("%d Mago(s)\n",m);
    return 0;
}
