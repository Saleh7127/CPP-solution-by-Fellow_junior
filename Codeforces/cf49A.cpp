#include<bits/stdc++.h>
using namespace std;
int main()
{

    char b,a[1000];
    int c,d,e,i,j,k,l;
    scanf("%[^\n]%*c",a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]!=' ' && a[i]!='?')
        {
            b=a[i];
        }
    }
    if(b=='a' || b=='A' || b=='e' || b=='E' || b=='i' || b=='I' || b=='o' || b=='O' || b=='u' || b=='U' || b=='y' || b=='Y')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
