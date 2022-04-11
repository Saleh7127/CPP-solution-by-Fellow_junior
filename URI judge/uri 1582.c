#include<stdio.h>
int main()
{

    int a,b,c,d,e,f,g,h,i;
    while(scanf("%d %d %d",&a,&b,&c) != EOF)
    {
        d=c*c ;
        e =a*a+b*b;
        f = a*a;
        g = b*b + c*c;
        h = b*b;
        i = a*a + c*c;

        if(d==e || f==g || h==i){
            if(a%2==0 && b%2==0 && c%2==0) printf("tripla pitagorica\n");
            else printf("tripla pitagorica primitiva\n");
        }
        else printf("tripla\n");
    }
    return 0;
}
