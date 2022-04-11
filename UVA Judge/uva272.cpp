#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int b=0,c,d,i,j,l;
    char a;
    while(scanf("%c",&a)==1)
    {
        if(a=='"')
        {
            b++;
            if(b%2==1)
                printf("``");
            else if(b%2==0)
                printf("''");
        }
        else
            printf("%c",a);
    }
    return 0;
}
