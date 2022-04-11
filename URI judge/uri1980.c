#include<stdio.h>
int main()
{
    long long int c,i,l;
    char a[100];
    for( ; ; )
    {
        scanf("%s",&a);
        if(a[0]=='0') break;
        c=1;
        l= strlen(a);
        for(i=1; i<=l; i++)
        {
            c*=i;
        }
        printf("%lld\n",c);
    }
    return 0;
}
