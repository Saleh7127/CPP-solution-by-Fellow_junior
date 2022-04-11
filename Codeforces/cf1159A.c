#include<stdio.h>
int main()
{
    int a,i,s=0;
    char c[1000];
    scanf("%d",&a);
    scanf("%s",c);
    for(i=0; i<a; i++)
    {
        if(c[i]=='+')
        {
            s++;
        }
        if(c[i]=='-')
        {
            if(s>0)
                s--;
        }
    }
    printf("%d\n",s);
    return 0;
}
