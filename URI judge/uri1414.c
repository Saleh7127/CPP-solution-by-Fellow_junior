#include<stdio.h>
int main()
{

    int a,b,c,i,t,s=0;
    char ch[100];
    for( ; ; )
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0) break;
        for(i=0;i<a;i++){
            scanf("%s %d",&ch,&c);
            t=b*a;
            s+=c;

        }
         printf("%d",t-s);
         s=0;
    }
}
