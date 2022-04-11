#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,w=0,l=0,dr=0;
    scanf("%d %d",&a,&b);
    for(i=6;i>0;i--)
    {
        c= abs(a-i);
        d= abs(b-i);
        if(c<d) w++;
        if(d<c) l++;
        if(c==d) dr++;
    }
    printf("%d %d %d\n",w,dr,l);

    return 0;
}
