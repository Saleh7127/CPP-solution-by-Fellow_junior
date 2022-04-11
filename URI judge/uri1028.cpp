#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        d=__gcd(b,c);
        printf("%d\n",d);

    }
    return 0;
}
