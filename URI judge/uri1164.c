#include<stdio.h>
int main()

{
    int i,a,b,c,d;
    scanf("%d",&a);
    for(i=0;i<a;i++){
            d=0;
        scanf("%d",&b);
        for(c=1;c<b;c++){
            if(b%c==0) d+=c;
        }
        if(d==b) printf("%d eh perfeito\n",b);
        else printf("%d nao eh perfeito\n",b);
    }

    return 0;
}
