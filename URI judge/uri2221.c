#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,l,g,h,i,j;
    scanf("%d",&a);
    for(l=0; l<a; i++)
    {
        scanf("%d",&b);
        scanf("%d %d %d",&c,&d,&e);
        scanf("%d %d %d",&f,&g,&h);
        i=(c+d)/2;
        if(e%2==0)
            i+=b;
        j=(f+g)/2;
        if(h%2==0)
            j+=b;
        if(i== j)
            printf("Empate\n");
        if(i>j)
            printf("Dabriel\n");
        if(i<j)
            printf("Guarte\n");
    }

    return 0;
}
