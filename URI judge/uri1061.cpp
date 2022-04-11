#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,d,m,h,s;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    s=s2-s1;
    m=m2-m1;
    h=h2-h1;
    d=d2-d1;
    if(s<0)
    {
        s+=60;
        m--;
    }
    if(m<0)
    {
        m+=60;
        h--;
    }
    if(h<0)
    {
        h+=24;
        d--;
    }
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);
    return 0;
}
