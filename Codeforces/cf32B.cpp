#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    char a[10000];
    scanf("%s",&a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='-' && a[i+1]=='-')
        {
            printf("2");
            i++;
            continue;
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
            printf("1");
            i++;
            continue;
        }
        else if(a[i]=='.')
        {
            printf("0");
            continue;

        }
    }
    printf("\n");

    return 0;
}
