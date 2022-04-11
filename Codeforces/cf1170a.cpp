#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d",&b,&c);
        d= b-c+1;
        e=c-1;
        printf("%d 1 %d\n",d,e);
    }
    return 0;
}
