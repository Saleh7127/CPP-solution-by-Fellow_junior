#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],b[10000],c[10000];
    int i,j,k;
    scanf("%s %s %s",a,b,c);
    if(a[0]=='r' && b[0]=='p' && c[0]=='r')
    {
        printf("M\n");
    }
     if(a[0]=='p' && b[0]=='s' && c[0]=='p')
    {
        printf("M\n");
    }
    if(a[0]=='s' && b[0]=='s' && c[0]=='r')
    {
        printf("S\n");
    }
    if(a[0]=='r' && b[0]=='r' && c[0]=='p')
    {
        printf("S\n");
    }
    if(a[0]=='p' && b[0]=='p' && c[0]=='s')
    {
        printf("S\n");
    }
    else printf("?\n");

    return 0;
}
