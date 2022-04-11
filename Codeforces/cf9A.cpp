#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    if(c==1) printf("1/1");
    if(c==2) printf("5/6");
    if(c==3) printf("2/3");
    if(c==4) printf("1/2");
    if(c==5) printf("1/3");
    if(c==6) printf("1/6");
    return 0;
}

