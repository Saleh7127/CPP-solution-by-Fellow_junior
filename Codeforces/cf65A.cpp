#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],b[10000];
    int i,k,j,l;
    scanf("%s %s",a,b);
    l= strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]=='0' && b[i]=='1')
        {
            a[i]='1';
        }
        else if(a[i]=='1' && b[i]=='0')
        {
            a[i]='1';
        }
        else
        {
            a[i]='0';
        }
    }
    printf("%s\n",a);

    return 0000000;
}
