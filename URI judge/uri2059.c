#include <stdio.h>
int main()
{
    int p,j1,j2,r,a,b,sum;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    sum = j1 + j2;
    if((sum%2==0 && p==1) || (sum%2==1 && p==0))
        b = 1;
    else
        b = 2;
    if((r==1 && a==0) || (r==0 && a==1))
        b = 1;
    else if(r==1 && a==1)
        b = 2;
    printf("Jogador %d ganha!\n",b);
    return 0;
}
