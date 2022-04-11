#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    char a[1000];
    scanf("%s",a);
    for(i=0; i<strlen(a); i++)
    {
        j=a[i]-'0';
        k=9-j;
        if(k<j)
        {
            if(i==0 && k==0)
                continue;
            a[i]=k+'0';
        }
    }
    printf("%s",a);
    return 0000;
}
