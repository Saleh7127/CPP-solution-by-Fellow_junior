#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char a[1000];
    int b,c;
    scanf("%s %d",&a,&b);
    if(a[0]=='f')
    {
        if(b==1)
            printf("L\n");
        else
            printf("R\n");
    }
    else if(a[0]=='b')
    {
        if(b==1)
            printf("R\n");
        else
            printf("L\n");
    }
    return 0;

}
