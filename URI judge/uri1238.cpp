#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    int c,d,e,i,j,k,l;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%s %s",a,b);
        d= strlen(a);
        e= strlen(b);
        if(d>e)
        {
            l=d;
        }
        else l=e;
        for(i=0;i<l;i++)
        {
           if(i<d) printf("%c",a[i]);
           if(i<e) printf("%c",b[i]);
        }
        printf("\n");
    }
    return 0;
}
