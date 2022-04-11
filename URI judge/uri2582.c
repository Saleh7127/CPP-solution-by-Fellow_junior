#include<stdio.h>
int main()
{
    int sum=0,i,x,y,n;

    scanf(" %d",&n);

    for (int i = 0; i < n; i++) {
        scanf("%d%d",&x,&y);
        sum=x+y;
    if(sum==0)
        printf("PROXYCITY\n");
    else if(sum==1)
        printf("P.Y.N.G.\n");
    else if(sum==2)
        printf("DNSUEY\n");
    else if(sum==3)
        printf("SERVERS\n");
    else if(sum==4)
        printf("HOST!\n");
    else if(sum==5)
        printf("CRIPTONIZE\n");
    else if(sum==6)
        printf("OFFLINE DAY\n");
    else if(sum==7)
        printf("SALT\n");
    else if(sum==8)
        printf("ANSWER!\n");
    else if(sum==9)
        printf("RAR?\n");
    else if(sum==10)
        printf("WIFI ANTENNAS\n");

    }

    return 0;
}
