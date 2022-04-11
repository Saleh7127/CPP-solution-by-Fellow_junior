#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f=0,i,j,k,l;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    for(i=1;i<=e;i++)
    {
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0)
        {
            f++;
        }
    }
    printf("%d\n",f);

    return 00000;
}
