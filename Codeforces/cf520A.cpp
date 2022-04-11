#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j,b=0;
    char c[500];
    scanf("%d",&a);
    scanf("%s",c);
    for(i=0; i<a; i++)
    {
        if(c[i]>64 && c[i]<91)
            c[i]=c[i]+32;
    }
    sort(c,c+a);
    for(j=0; j<a; j++)
    {
        if(c[j]!=c[j+1])
        b++;
    }
    if(b<=25)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

