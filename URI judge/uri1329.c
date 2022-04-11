
#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,i;
    scanf("%d",&a);
    while(a!=0)
    {

        for(i=0;i<a;i++){
        scanf("%d",&b);
        if(b==0)
            c++;
        else if(b==1)
        d++;
        }
        printf("Mary won %d times and John won %d times\n",c,d);
         c=0;
        d=0;
        scanf("%d",&a);
    }

    return 0;
}


/*#include<stdio.h>
int main()
{
    int c, N, val, a = 0, b = 0;

    scanf("%d", &N);

    do
    {
        a = 0;
        b = 0;

        for(c = 0; c < N; c++)
        {
            scanf("%d", &val);

            if(val==0)
                a++;
            else if (val == 1)
                b++;
        }

        printf("Mary won %d times and John won %d times\n",a, b);

        scanf("%d", &N);

    }
    while (N != 0);

    return 0;
}
*/
