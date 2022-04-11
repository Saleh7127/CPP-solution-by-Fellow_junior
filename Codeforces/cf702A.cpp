#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=1,d=1,e,f,i,j,k,l;
    scanf("%d",&b);
    int a[b+5];
    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<b-1; i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
        else c=1;
        d=max(c,d);
    }
    printf("%d\n",d);
    return 0;
}
