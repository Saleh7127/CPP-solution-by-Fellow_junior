#include<stdio.h>
int main()
{

    int i,r,b,c,a,x,y;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&x,&y);
        r = (9*x*x + y*y);
        b= (2*x*x + 25*y*y);
        c= (-100*x + y*y*y);
        if(r>b && r>c) printf("Rafael ganhou\n");
        else if(b>r && b>c) printf("Beto ganhou\n");
        else if(c>b && c>r) printf("Carlos ganhou\n");

    }
    return 0;
}
