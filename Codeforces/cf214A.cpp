#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e,n,m,i,j,k,l;
    scanf("%d %d",&n,&m);
    c= max(n,m);
    for(a=0; a<=c; a++)
    {
        for(b=0; b<=c; b++)
        {
            if(((a*a)+b == n) && ((b*b)+a == m))
            {
                d++;
            }
        }
    }
    printf("%d\n",d);

    return 0;
}
