#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0,r,g=0,h=0,j,k,l,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        if(b==1)
        {
            e+=c;
            f+=d;
        }
        else if(b==2)
        {
            g+=c;
            h+=d;
        }
    }
    if(e>=f)
        printf("LIVE\n");
    else if(e<f)
        printf("DEAD\n");
    if(g>=h)
        printf("LIVE\n");
    else if(g<h)
        printf("DEAD\n");
    return 0;
}
