#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i,j,k,l,m=0;
    scanf("%s %s",&a,&b);
    l= strlen(a);
    k= strlen(b);
    for(i=0,j=k-1; i<l; i++,j--)
    {
        if(a[i]==b[j])
            m++;
    }
    if(m==l)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
