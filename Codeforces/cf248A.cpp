#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e=0,f=0,g=0,h=0,i,j,k,l;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        if(b==0) d++;
        else if(b==1) e++;
        if(c==0) f++;
        else if(c==1) g++;
    }
    h = min(d,e) + min(f,g);
    printf("%d\n",h);

    return 0;
}
