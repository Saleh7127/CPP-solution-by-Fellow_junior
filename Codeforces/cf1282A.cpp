#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,i,j,k,l,r;
    scanf("%d",&d);
    for(i=0; i<d; i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&r);

        if(a>b)
        {
            swap(a,b);
        }

        e=max(a,c-r);
        f=min(b,c+r);
        g=f-e;

        if(g<0)
        {
            g=0;
        }

        k=b-a-g;

        printf("%d\n",k);
    }
    return 0;
}
