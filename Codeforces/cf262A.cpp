#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f,g,h,i,j,k,l;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        d=0;
        scanf("%d",&c);
        for( ;c!=0; )
        {
            if(c%10==4 || c%10==7)d++;
            c=c/10;
        }
        if(d<=b) e++;
    }
    printf("%d\n",e);

    return 0;
}
