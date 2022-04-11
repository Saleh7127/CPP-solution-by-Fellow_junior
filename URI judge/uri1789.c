#include<stdio.h>
int main()
{
    int a,i,c,b=0;
    while(scanf("%d",&a) != EOF){
    for(i=0;i<a;i++)
    {
        scanf("%d",&c);
        if(c>b)
         b=c;
    }

     if(b<10) printf("1\n");
     if(b>=10 && b<20) printf("2\n");
     if(b>=20) printf("3\n");
     b=0;
    }
}
