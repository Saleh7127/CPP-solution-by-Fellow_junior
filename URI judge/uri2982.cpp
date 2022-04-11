#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d=0,i;
    char e[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%S %d",&e,&b);
        if(e[0]=='V')
        {
            c+=b;
        }
        else if(e[0]=='G')
        {
            d+=b;
        }
    }
    if(c>=d) printf("A greve vai parar.\n");
    else printf("NAO VAI TER CORTE, VAI TER LUTA!\n");

    return 00000;
}
