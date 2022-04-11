#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c=0,d,e,f,g,i,j,k,l;
    char a[1000];
    scanf("%s",&a);
    l = strlen(a);
    sort(a,a+l);
    for(i=0; i<l; i++)
    {
        if(a[i] != a[i+1])
            c++;
    }

    if(c%2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}

