#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j;
    for( ; ; )
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
            break;
        int c[50000]={0},e[50000]={0},d=0;
        for(i=0; i<b; i++)
        {
            scanf("%d",&c[i]);
            e[c[i]]++;
            if(e[c[i]]==2)
                d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
