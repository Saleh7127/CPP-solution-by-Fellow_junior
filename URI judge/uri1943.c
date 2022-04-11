#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1) printf("Top 1\n");
    if(a>1 && a<4) printf("Top 3\n");
     if(a>3 && a<6) printf("Top 5\n");
      if(a>5 && a<11) printf("Top 10\n");
       if(a>10 && a<26) printf("Top 25\n");
        if(a>25 && a<51) printf("Top 50\n");
         if(a>50 && a<101) printf("Top 100\n");


         return 0;
}
