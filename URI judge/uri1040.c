#include<stdio.h>
int main()
{
    double a,b,c,d,e,av1,av2;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    av1 = ((a*2)+(b*3)+(c*4)+(d*1))/10 ;
    printf("Media: %.1lf\n",av1);
    if( av1 > 7)
        {
          printf("Aluno aprovado.\n");
        }
    else if( av1< 5)
        {
          printf("Aluno reprovado.\n");
        }
    else if(av1>= 5.0 && av1<= 6.9) {
          printf("Aluno em exame.\n");
          scanf("%lf",&e);
          printf("Nota do exame: %.1lf\n",e);
          av2 = (av1 + e)/2 ;
          if( av2 >= 5 )
            {
             printf("Aluno aprovado.\n");
            }

        else
            {
             printf("Aluno reprovado.\n");
            }

        printf("Media final: %.1lf\n",av2);
    }

}
