#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,i;
    while(scanf("%d",&a)!= EOF)
    {
        d=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&b);
            if(b==a)
                d++;
        }
        printf("%d\n",d);
    }

    return 0;
}
