#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b=0,c=0;
    char d[1000],e;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s %c",d,&e);
        if(e=='F') b++;
        else if(e=='M') c++;

    }
    printf("%d carrinhos\n",c);
    printf("%d bonecas\n",b);

    return 0;
}
