#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,b=0;
    char a[10];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",&a);
        if(a[0]=='+' || a[2]=='+')
        {
           b=b+1;
        }
        if(a[0]=='-' || a[2]=='-')
            {
                b=b-1;
            }
            b=b;
    }
    printf("%d\n",b);

    return 0;
}
