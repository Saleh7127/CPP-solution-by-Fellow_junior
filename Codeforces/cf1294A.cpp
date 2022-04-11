#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        k=0;
        scanf("%d %d %d %d",&b,&c,&d,&e);
        k= b+c+d+e;
        if(k%3==0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
