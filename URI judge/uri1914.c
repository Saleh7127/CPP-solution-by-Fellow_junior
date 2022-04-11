#include<stdio.h>
#include<string.h>
int main()

{
    int a,b,c,i;
    char s1[101],r1[101],s2[101],r2[101];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s %s %s %s",&s1,&r1,&s2,&r2);
        scanf("%d %d",&b,&c);
        if(r1[0]=='P')
        {
            if((b+c)%2==0) printf("%s\n",s1);
            else printf("%s\n",s2);
        }
        else
        {
            if((b+c)%2==0) printf("%s\n",s2);
            else printf("%s\n",s1);
        }
    }

    return 0;
}
