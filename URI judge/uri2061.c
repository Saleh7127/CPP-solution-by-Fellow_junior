#include<stdio.h>
int main()
{
    char ch[100];
    int a,b,i,s=0;
    scanf("%d %d",&a,&b);
   for(i=0;i<b;i++)
    {
        s=a;
        scanf("%s",&ch);
        if(ch[0]=='f')s++;
        else s--;
    }
    printf("%d\n",s);
    return 0;
}
