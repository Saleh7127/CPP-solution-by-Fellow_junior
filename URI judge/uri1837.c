#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0 && b>0) printf("%d %d\n",(a/b)-1,(a%b)+b);
    else if(a>0 && b>0) printf("%d %d\n",(a/b),(a%b));
      else if(a>0 && b<0) printf("%d %d\n",(a/b),(a%b));
    else if(a<0 && b<0) printf("%d %d\n",(a/b),(a%b));

    return 0;
}
