#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,p[1000],i[1000],par=0,imp=0,a,j;
    while(scanf("%d",&a)==1)
    {
        if(a%2==0)
        {
            p[par]=a;
            par++;
        }
        else
        {
            i[imp]=a;
            imp++;
        }
        if(par==5)
        {
            for (j = 0; j <= 4; j++)
            {
                printf("par[%d] = %d\n",j,p[j]);
                p[j]='\0';
            }
            par=0;
        }
        if(imp==5)
        {
            for (j = 0; j <= 4; j++)
            {
                printf("impar[%d] = %d\n",j,i[j]);
                i[j]='\0';
            }
            imp=0;
        }
    }
    for (j = 0; j <= 4; j++)
    {
        if (i[j] == '\0')
            break;
        printf("impar[%d] = %d\n", j, i[j]);
    }
    for (j = 0; j <= 4; j++)
    {
        if (p[j] == '\0')
            break;
        printf("par[%d] = %d\n", j, p[j]);
    }
    return 0;
}
