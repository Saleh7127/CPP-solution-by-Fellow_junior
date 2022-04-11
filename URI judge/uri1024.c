#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,n,o,p;
    char a[1002],b[1002];
    scanf("%d",&n);
    getchar();
    for(i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c",a);
        l = strlen(a);
        for(j=0; j<l; j++)
        {
            if((a[j]>='A' && a[j]<='Z') || (a[j]>='a' && a[j]<='z'))
                a[j] += 3;
        }
        p=l-1;
        for(j=0; j<l; j++)
        {
            b[j]=a[p];
            p--;
        }
        b[j]='\0';
        for(j = l/2; j < l; j++)
            b[j] -= 1;
        printf("%s\n",b);
    }
    return 0;
}
