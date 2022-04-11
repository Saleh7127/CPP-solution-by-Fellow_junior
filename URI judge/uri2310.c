#include<stdio.h>
int main()
{
    double a,b,c,e=0.0,f=0.0,g=0.0,k,l,m,o=0.0,p=0.0,q=0.0;
    double d,i;
    char x[1000];
    scanf("%lf",&d);
    for(i=0; i<d; i++)
    {
        scanf("%s",&x);
        scanf("%lf %lf %lf",&a,&b,&c);
        scanf("%lf %lf %lf",&k,&l,&m);
        e+=a;
        f+=k;
        g+=b;
        o+=l;
        p+=c;
        q+=m;
    }
    printf("Pontos de Saque: %.2lf %%.\n",(f*100.00)/e);
    printf("Pontos de Bloqueio: %.2lf %%.\n",(o*100.00)/g);
    printf("Pontos de Ataque: %.2lf %%.\n",(q*100.00)/p);
    return 0;
}
