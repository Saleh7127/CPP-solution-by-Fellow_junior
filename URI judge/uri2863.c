#include<stdio.h>
int main()
{
    int a,i;
    double b,s;
    while( scanf("%d",&a) != EOF)
    {
        s=12.00;
        while(a--){
            scanf("%lf",&b);

        if(b<s)
            s=b;
        }
        printf("%.2lf\n",s);
    }

}
