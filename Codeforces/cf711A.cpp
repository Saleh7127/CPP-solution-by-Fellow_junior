#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=0,d,e,i,j,k,l;
    char a[1000][1000];

    scanf("%d",&b);

    for(i=0; i<b; i++)
    {
        scanf("%s",a[i]);
    }

    for(i=0; i<b; i++)
    {
        for(j=0; j<5; j++)
        {
            if((a[i][0]=='O' && a[i][1]=='O') || (a[i][3]=='O' && a[i][4]=='O'))
            {
                c++;
                if(a[i][0]=='O' && a[i][1]=='O')
                {
                    a[i][0]='+';
                    a[i][1]='+';
                    break;
                }
                else if(a[i][3]=='O' && a[i][4]=='O')
                {
                    a[i][3]='+';
                    a[i][4]='+';
                    break;
                }
            }
        }
        if(c==1)
        {
            break;
        }
    }

    if(c!=0)
    {
        printf("YES\n");
        for(i=0; i<b; i++)
        {
            for(j=0; j<5; j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    else if(c==0)
    {
        printf("NO\n");
    }

    return 0;
}
