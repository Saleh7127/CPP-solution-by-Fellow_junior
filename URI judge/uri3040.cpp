#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        if((b>=200 && b<=300) && (c>=50) && (d>=150))
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}
