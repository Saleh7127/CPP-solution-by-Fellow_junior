#include<stdio.h>
int main()
{
    double b=0.0,c=0.0,d=0.0;
    int i,j,k;
    char a[10000];
    scanf("%s",&a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='1' && a[i+1]=='0')
        {
            b+=10;
            c+=1.00;
        }
        else
        {
            if(a[i]=='1')
            {
                b+=1;
                c+=1.00;
            }
            else if(a[i]=='2')
            {
                b+=2;
                c+=1.00;
            }
            else if(a[i]=='3')
            {
                b+=3;
                c+=1.00;
            }
            else if(a[i]=='4')
            {
                b+=4;
                c+=1.00;
            }
            else if(a[i]=='5')
            {
                b+=5;
                c+=1.00;
            }
            else if(a[i]=='6')
            {
                b+=6;
                c+=1.00;
            }
            else if(a[i]=='7')
            {
                b+=7;
                c+=1.00;
            }
            else if(a[i]=='8')
            {
                b+=8;
                c+=1.00;
            }
            else if(a[i]=='9')
            {
                b+=9;
                c+=1.00;
            }
        }
    }
    d= b/c;
    printf("%.2lf\n",d);

    return 0;
}
