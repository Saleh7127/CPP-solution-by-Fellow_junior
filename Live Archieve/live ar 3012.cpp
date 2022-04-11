#include<bits/stdc++.h>
using namespace std;
#define ll long long
int digit(int z)
{
    int cnt=0;
    while(z!=0)
    {
        z/=10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int a[10000],n,m,b=1,c,d,i,j,k,l,x1,x2,x3,x4,x5,x6,sum,up,down;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        printf("Case %d:\n",b++);
        x1=sum/n; //bagfol;
        if(sum%n==0)
        {
            if(x1<0) printf("- %d\n",abs(x1));
            else printf("%d\n",x1);
        }
        else
        {
            x2=sum%n; //bagsesh;
            if(x2<0) x3=__gcd(-1*x2,n); //gcd;
            else x3=__gcd(x2,n); //gcd;

            up=x2/x3; //bognangsher upor nich;
            down=n/x3;

            x4=digit(up); //digit koita ase;
            x5=digit(down);
            x6=digit(x1);
            if(x1>0) //bagfol positive hole;
            {
                for(i=0; i<(x5+x6-x4); i++) //uporer space;
                {
                    printf(" ");
                }
                printf("%d\n",up);

                printf("%d",x1); //bagfol;
                for(j=0; j<x5; j++) //majkhaner ag sign;
                {
                    printf("-");
                }
                printf("\n");

                for(k=0; k<x6; k++) //nicher n er jonno space;
                {
                    printf(" ");
                }
                printf("%d\n",down);
            }
            if(x1<0) //bagfol negative hole;
            {
                for(i=0; i<(x5+x6-x4)+2; i++) //uporer space + negative sign er space;
                {
                    printf(" ");
                }
                printf("%d\n",-1*up);

                printf("- %d",-1*x1); //bagfol;
                for(j=0; j<x5; j++) //majkhaner ag sign;
                {
                    printf("-");
                }
                printf("\n");

                for(k=0; k<x6+2; k++) //nicher n er jonno space + negative sign er space;
                {
                    printf(" ");
                }
                printf("%d\n",down);
            }
            if(x1==0)
            {
                if(x2>0) //bagsesh positive hole;
                {
                    for(i=0; i<(x5+x6-x4); i++) //uporer space;
                    {
                        printf(" ");
                    }
                    printf("%d\n",up);

                    for(j=0; j<x5; j++) //majkhaner ag sign;
                    {
                        printf("-");
                    }
                    printf("\n");

                    for(k=0; k<x6; k++) //nicher n er jonno space;
                    {
                        printf(" ");
                    }
                    printf("%d\n",down);
                }
                if(x2<0) //bagsesh negative hole;
                {
                    for(i=0; i<(x5+x6-x4)+2; i++) //uporer space + negative sign er space;
                    {
                        printf(" ");
                    }
                    printf("%d\n",-1*up);
                    printf("- ");
                    for(j=0; j<x5; j++) //majkhaner ag sign;
                    {
                        printf("-");
                    }
                    printf("\n");

                    for(k=0; k<x6+2; k++) //nicher n er jonno space + negative sign er space;
                    {
                        printf(" ");
                    }
                    printf("%d\n",down);
                }
            }
        }
    }
    return 0;
}

