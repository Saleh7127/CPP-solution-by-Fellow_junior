#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k;
    char a[100],b[100];
    scanf("%s",a);
    for(i=0; i<5; i++)
    {
        scanf("%s",b);
        if((a[0]==b[0]) || (a[1]==b[1]))
        {
            j++;
        }

    }
    if(j>=1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

