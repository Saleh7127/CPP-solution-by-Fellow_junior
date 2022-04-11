#include<stdio.h>
int main()
{

    int a,b,i,ar[100],s=0;
    scanf("%d %d",&a,&b);
    for(i=0; i<a; i++){

        scanf("%d",&ar[i]);
    }
    for(i=0; i<a; i++)
    {

        if(ar[i]>= ar[b-1] && ar[i]>0)
            s++;
    }



 printf("%d\n",s);




    return 0;
}



